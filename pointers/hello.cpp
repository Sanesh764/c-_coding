#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <iomanip>

// Function to generate data for different complexity types
class ComplexityGraph {
public:
    // Generate data points for different complexity types
    static std::vector<std::pair<int, double>> generateComplexityData(
        int maxInput, 
        const std::string& complexityType
    ) {
        std::vector<std::pair<int, double>> data;
        
        for (int n = 1; n <= maxInput; ++n) {
            double result = 0;
            
            if (complexityType == "O(1)") {
                result = 1;  // Constant
            }
            else if (complexityType == "O(log n)") {
                result = std::log(n);
            }
            else if (complexityType == "O(n)") {
                result = n;
            }
            else if (complexityType == "O(n log n)") {
                result = n * std::log(n);
            }
            else if (complexityType == "O(n^2)") {
                result = n * n;
            }
            else if (complexityType == "O(2^n)") {
                result = std::pow(2, n);
            }
            
            data.push_back({n, result});
        }
        
        return data;
    }
    
    // Generate gnuplot script for visualization
    static void generateGnuplotScript(
        const std::vector<std::string>& complexities, 
        int maxInput
    ) {
        std::ofstream script("complexity_graph.plt");
        script << "set terminal png size 800,600\n";
        script << "set output 'complexity_graph.png'\n";
        script << "set title 'Algorithm Complexity Comparison'\n";
        script << "set xlabel 'Input Size (n)'\n";
        script << "set ylabel 'Time/Operations'\n";
        script << "set grid\n";
        script << "plot ";
        
        for (size_t i = 0; i < complexities.size(); ++i) {
            script << "'-' with lines title '" << complexities[i] << "'";
            if (i < complexities.size() - 1) script << ", ";
        }
        script << "\n";
        
        for (const auto& complexity : complexities) {
            auto data = generateComplexityData(maxInput, complexity);
            for (const auto& point : data) {
                script << point.first << " " << point.second << "\n";
            }
            script << "e\n";
        }
        
        script.close();
    }
};

int main() {
    std::vector<std::string> complexities = {
        "O(1)", 
        "O(log n)", 
        "O(n)", 
        "O(n log n)", 
        "O(n^2)", 
        "O(2^n)"
    };
    
    ComplexityGraph::generateGnuplotScript(complexities, 20);
    
    std::cout << "Gnuplot script generated. Run with gnuplot to create graph.\n";
    return 0;
}