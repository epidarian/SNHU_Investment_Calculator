# SNHU_Investment_Calculator
CS 210 Project 5


# General
This is an investment calculator to help users calculate the future value of their investments based on an initial set of conditions and a configurable viewport. I structured the program to be readable and modular. The data is handled by a class and integrated with a header. The program is also well-optimized, taking the fewest computational paths to each step, as allowable by the floating point type.

# Potential Enhancements
 + Optimize Performance: Refactor calculation functions to reduce computational complexity, especially for long investment durations.
 + Enhance Security: Implement input validation to ensure that all user inputs are within reasonable bounds.
 + Expand Features: Introduce additional financial models with variable interest rates and progression models.

# Challenge 
The most challenging part was implementing the compound interest calculations and ensuring accuracy over long durations. Handling floating-point precision was particularly tricky, as minor inaccuracies could significantly affect results. I overcame this by researching best practices in financial calculations, consulting documentation, and running extensive tests. To support my work, I added resources like financial formula guides and C++ documentation to my toolkit for future reference.

# Demonstrated Skills
 + Modular Design: The ability to break down complex problems into manageable components.
 + Error Handling: Implementing checks to handle potential errors in user input, which is crucial for creating reliable software.
 + Project Structure: Segmenting code into files and properly dividing modular tasks.
 + Algorithmic Thinking: Coding with a math-forward approach to handling problems.

#Misc
To ensure maintainability, I adhered to consistent naming conventions and included detailed comments throughout the code. Functions were kept short and focused on a single task, making it easy for others to understand and modify the program. Additionally, I used header files to define interfaces, allowing for adaptability in case new features are added or existing ones are changed in the future.
