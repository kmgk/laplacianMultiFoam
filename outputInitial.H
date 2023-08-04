const fileName dPath = "postProcessing";  // postProcessingディレクトリを指定する
if(!isDir(dPath)) mkDir(dPath);           // ディレクトリ作成の関数もOFに備わっている

const fileName fPath = dPath / "temperature.txt";  // fileName型の"/"演算子で文字列"postProcessing/temperature.txt"を生成
OFstream os(fPath);                                // ここに出力していく

os << "#time" << tab << "max" << tab << "mean" << tab << "min" << endl;   // 一行目を#で始めるとgnuplotで読み込める
