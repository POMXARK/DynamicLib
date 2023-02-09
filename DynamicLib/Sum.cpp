extern "C" __declspec(dllexport) int Sum(int a, int b) {
	return a + b;
} // публичная функция для вызова из вне __declspec(dllexport)