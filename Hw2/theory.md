**a)**

A = [5, 4, 3, 2, 1]

1st:  [4, 3, 2, 1, 5] \(n-1 jämförelser\) -> isReady == false (n-1 jämförelser)

2nd: [3, 2, 1, 4, 5] \(n-1 jämförelser\) -> isReady == false (n-1 jämförelser)

3rd:  [2, 1, 3, 4, 5] \(n-1 jämförelser\) -> isReady == false (n-1 jämförelser)

4th:  [1, 2, 3, 4, 5] \(n-1 jämförelser\) -> isReady == true (n-1 jämförelser)

Minst antal jämförelser: (n-1) + (n-1) = 2n - 2

Max antal jämförelser: (n-1) * (2n-2) = (n-1) * 2(n-1) = 2n<sup>2</sup> - 2n - 2n + 2 = 2n<sup>2</sup> - 4n +  2

f(x) = O(g(x)) om det finns positiva konstanter M och n<sub>0</sub> så att T(n) <= Mf(n) för alla n >= n<sub>0</sub>

f(x) = 2n<sup>2</sup> - 4n +  2 

g(x) = n<sup>2</sup>

f(x) <= Mg(x)

låt x<sub>0</sub> = 1 och M = 8

f(x) = 2n<sup>2</sup> - 4n +  2 <= 2n<sup>2</sup> + 4n<sup>2</sup> + 2n<sup>2</sup> = 8n<sup>2</sup>
(från https://en.wikipedia.org/wiki/Big_O_notation#Example)

f(x) = O(n<sup>2</sup>)

---

Här var jag nog lite otydlig. Trodde att det stod bättre beskrivet i snilssons hemsida än vad de gjorde.
Kolla definitionen på https://en.wikipedia.org/wiki/Big_O_notation och i boken.
Jag tänkte mig en härledning i stil med den som ges i exemplet på https://en.wikipedia.org/wiki/Big_O_notation

