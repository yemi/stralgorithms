**a)**

A = [5, 4, 3, 2, 1]

1st:  [4, 3, 2, 1, 5] \(n-1 jämförelser\) -> isReady == false (n-1 jämförelser)

2nd: [3, 2, 1, 4, 5] \(n-1 jämförelser\) -> isReady == false (n-1 jämförelser)

3rd:  [2, 1, 3, 4, 5] \(n-1 jämförelser\) -> isReady == false (n-1 jämförelser)

4th:  [1, 2, 3, 4, 5] \(n-1 jämförelser\) -> isReady == true (n-1 jämförelser)

Minst antal jämförelser: (n-1) + (n-1) = 2n - 2
Max antal jämförelser: (n-1) * (2n-2) = (n-1) * 2(n-1) = 2n2 - 2n - 2n + 2 = 2n<sup>2</sup> - 4n +  2 =  **O(n2)** 

_Varför blir det O(n2)?_ För att n2 blir större än 4n för ett tillräckligt stort värde på n och
för att vi inte är intresserade av konstanter (2) iom att de inte påverkas av värdet n.

