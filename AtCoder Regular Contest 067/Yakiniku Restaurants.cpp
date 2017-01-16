// eventual happiness = (The total deliciousness of the meals eaten) - (The total distance traveled)

// F (i, j) = 焼肉店 i から出発し、焼肉店 j で終了するように行動した時の、食べる焼き肉の美味しさの合計の最大値
// G(x, i, j) = 焼肉店 i から焼肉店 j までの焼肉店で、チケット x を引き換えに食べられる焼き肉の美味しさの最大値
// この opt は、 RMQ を使うと高速に求めることができます
// i ≤ opt ≤ j なる全ての i, j について、 G(x, i, j) = G(x, opt, opt) となります
// i, j < opt のパターンと、 opt < i, j のパターンも、 再帰的に同じことを繰り返すと
// これは、 imos 法を使うことで十分高速に処理できます
// O(N \log N M + N^2 )

// RMQ: range minimum quering
