//volScalarField T                      // volScalarField型の温度Tについて考える
const word t = runTime.timeName();      // 時刻は.timeName()でword{aka string}型、.value()でscalar{aka double}型

os << t << tab << gMax(T) << tab << gAverage(T) << tab << gMin(T) << endl;  // tabでタブ、nlかendlで改行ができる
