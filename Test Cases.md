# Test Cases for Quadratic and Cubic Equation Solver

### 1. Quadratic Equation (Degree 2) with two real roots :
```
Choose the degree of the equation (2 for quadratic, 3 for cubic): 2
Enter the coefficients a, b, and c for the quadratic equation (ax^2 + bx + c): 1 -3 2
Two real roots: 2 and 1
```
### 2. Quadratic Equation (Degree 2) with one real root :
```
Choose the degree of the equation (2 for quadratic, 3 for cubic): 2
Enter the coefficients a, b, and c for the quadratic equation (ax^2 + bx + c): 1 2 1
One real root: -1
```
### 3. Quadratic Equation (Degree 2) with complex roots :
```
Choose the degree of the equation (2 for quadratic, 3 for cubic): 2
Enter the coefficients a, b, and c for the quadratic equation (ax^2 + bx + c): 1 2 5
Complex roots: -1 + 2i and -1 - 2i
```
### 4. Cubic Equation (Degree 3) with one real root :
```
Choose the degree of the equation (2 for quadratic, 3 for cubic): 3
Enter the coefficients a, b, c, and d for the cubic equation (ax^3 + bx^2 + cx + d): 1 -6 12 -8
One real root: 2
```
### 5. Cubic Equation (Degree 3) with one real root (Multiplicity 2) :
```
Choose the degree of the equation (2 for quadratic, 3 for cubic): 3
Enter the coefficients a, b, c, and d for the cubic equation (ax^3 + bx^2 + cx + d): 1 -6 12 -24
One real root (with multiplicity 2): 2
One real root: 2
```
### 6. Cubic Equation (Degree 3) with complex roots :
```
Choose the degree of the equation (2 for quadratic, 3 for cubic): 3
Enter the coefficients a, b, c, and d for the cubic equation (ax^3 + bx^2 + cx + d): 1 0 3 -8
Three complex roots: (-1.00000, 1.73205i), (-1.00000, -1.73205i), 2.00000
```
### 7. Cubic Equation (Degree 3) with Invalid input with 'a' coefficient as zero:
```
Choose the degree of the equation (2 for quadratic, 3 for cubic): 3
Enter the coefficients a, b, c, and d for the cubic equation (ax^3 + bx^2 + cx + d): 0 2 4 8
Invalid input. 'a' coefficient cannot be zero for a cubic equation.
```
### 8. Invalid Degree Entered :
```
Choose the degree of the equation (2 for quadratic, 3 for cubic): 4
Invalid degree entered. This program supports degrees 2 (quadratic) and 3 (cubic) only.
```
