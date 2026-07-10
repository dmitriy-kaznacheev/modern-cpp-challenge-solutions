#include "math_utils.h"

namespace MathProblems {

int sumOfProperDivisors(int n) {
  if (n <= 1) {
    return 0;
  }

  int sum = 1;  // 1 всегда делитель для n > 1
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      sum += i;
      int other = n / i;
      if (other != i) {
        sum += other;
      }
    }
  }
  return sum;
}

}  // namespace MathProblems