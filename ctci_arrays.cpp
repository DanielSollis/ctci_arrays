#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#pragma region TYPES


#pragma region Matrix


struct Matrix {
	vector<vector<int>> two = {
		{ 1, 2 },
		{ 3, 4 }
	};

	vector<vector<int>> three = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	vector<vector<int>> four = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};

	vector<vector<int>> five = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15 },
		{ 16, 17, 18, 19, 20 },
		{ 21, 22, 23, 24, 25 }
	};

	vector<vector<int>> six = {
		{ 1, 2, 3, 4, 5, 6 },
		{ 7, 8, 9, 10, 11, 12 },
		{ 13, 14, 15, 16, 17, 18 },
		{ 19, 20, 21, 22, 23, 24 },
		{ 25, 26, 27, 28, 29, 30 },
		{ 31, 32, 33, 34, 35, 36 }
	};

	vector<vector<int>> seven = {
		{ 1, 2, 3, 4, 5, 6, 7 },
		{ 8, 9, 10, 11, 12, 13, 14 },
		{ 15, 16, 17, 18, 19, 20, 21 },
		{ 22, 23, 24, 25, 26, 27, 28 },
		{ 29, 30, 31, 32, 33, 34, 35 },
		{ 36, 37, 38, 39, 40, 41, 42 },
		{ 43, 44, 45, 46, 47, 48, 49 },
	};
};


#pragma endregion
#pragma region Matrix_With_Zeroes


struct Matrix_With_Zeroes {
	vector<vector<int>> two = {
		{ 1, 2 },
		{ 3, 0 }
	};

	vector<vector<int>> three = {
		{ 1, 2, 3 },
		{ 0, 5, 0 },
		{ 7, 8, 9 }
	};

	vector<vector<int>> four = {
		{ 1, 2, 3, 4 },
		{ 5, 0, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 0 }
	};

	vector<vector<int>> five = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 0, 10 },
		{ 11, 12, 13, 14, 15 },
		{ 0, 17, 0, 19, 20 },
		{ 21, 22, 23, 24, 25 }
	};

	vector<vector<int>> six = {
		{ 1, 2, 3, 4, 0, 6 },
		{ 7, 8, 9, 10, 11, 12 },
		{ 13, 14, 15, 16, 17, 18 },
		{ 19, 20, 0, 22, 23, 24 },
		{ 25, 26, 27, 28, 29, 30 },
		{ 31, 0, 33, 34, 35, 36 }
	};

	vector<vector<int>> seven = {
		{ 0, 2, 3, 4, 5, 6, 0 },
		{ 8, 9, 10, 11, 12, 13, 14 },
		{ 15, 16, 17, 0, 19, 20, 21 },
		{ 22, 23, 24, 25, 0, 27, 28 },
		{ 29, 30, 31, 32, 33, 34, 35 },
		{ 36, 37, 38, 39, 40, 41, 42 },
		{ 0, 44, 45, 46, 47, 48, 0 },
	};
};


#pragma endregion


#pragma endregion
#pragma region FUNCTION PROTOTYPES


//QUESTIONS
bool is_unique(string str);
bool is_permutation(string str_1, string str_2);
unordered_map<char, int> hash_string(string str);
void urlify(string & str, int length);
void urlify_space(string & str, int index);
bool palindrome_permutation(string str);
int find_odd_chars(string str);
bool one_away(string str_1, string str_2);
string string_compression(string str);
void rotate_matrix(vector<vector<int>> & matrix);
void zero_matrix(vector<vector<int>> & matrix);
vector<pair<int, int>> find_zeroes(vector<vector<int>> matrix);
void zero_coordinate(vector<vector<int>> & matrix, pair<int, int> point);

//TESTS
void test_is_unique();
void test_is_permutation();
void test_urlify();
void urlify_test_string(string test_string);
int find_spaces(string str);
void append_white_space(string str, int end_spaces);
void test_palindrome_permutation();
void test_one_away();
void test_string_compression();
void test_rotate_matrix();
void print_matrix(vector<vector<int>> matrix);
vector<vector<int>> get_matrix(int dimension);
void test_zero_matrix();


#pragma endregion

#pragma region MAIN


int main() {
	bool quit = false;
	while (!quit) {
		printf("1. Is Unique\n2. Is Permutation\n3. URLify\n4. Palindrome Permutation\n5. One Away\n6. String Compresion\n7. Rotate Matrix8. Zero Matrix\n\n");
		printf("Enter test (1-8, 0 to exit)");
		int test_number;
		cin >> test_number;
		if (test_number == 0) {
			quit = true;
		}
		else {
			run_test(test_number);
		}
		for (int i = 0; i < 10; ++i) {
			printf("\n\n\n\n\n");
		}
	}
	return 0;
}


void run_test(int test_number) {
		switch (test_number)
		{
		case 1:
			test_is_unique();
			break;
		case 2:
			test_is_permutation();
			break;
		case 3:
			test_urlify();
			break;
		case 4:
			test_palindrome_permutation();
			break;
		case 5:
			test_one_away();
			break;
		case 6:
			test_string_compression();
			break;
		case 7:
			test_rotate_matrix();
			break;
		case 8:
			test_zero_matrix();
			break;
		default:
			printf("please choose a valid test number\n\n");
			break;
		}
}


#pragma endregion

#pragma region FUNCTIONS


#pragma region is_unique


bool is_unique(std::string str){
	if (str.size() > 128) {
		return false;
	}
	if (str.size() == 0) {
		return true;
	}

	bool char_arr[128] = { false };
	for (std::string::iterator it = str.begin(); it != str.end(); it++){
		if (char_arr[*it] == true) {
			return false;
		}
		else {
			char_arr[*it] = true;
		}
	}
	return true;
}


#pragma endregion
#pragma region is_permutation


bool is_permutation(string str_1, string str_2) {
	unordered_map<char, int> map_1 = hash_string(str_1);
	unordered_map<char, int> map_2 = hash_string(str_2);
	if (map_1 == map_2) {
		return true;
	}
	return false;
}


unordered_map< char, int> hash_string(string str) {
	unordered_map< char, int> map;
	for (string::iterator it = str.begin(); it != str.end(); it++) {
		if (map.find(*it) == map.end()) {
			map.emplace(*it, 0);
		}
		else {
			map.emplace(*it, ++map[*it]);
		}
	}
	return map;
}


#pragma endregion
#pragma region urlify


void urlify(string & str, int length) {
	for (int i = 0; i < length; ++i) {
		if (str[i] == ' ') {
			for (int j = length - 1; j > i; --j) {
				str[j + 2] = str[j];
			}
			urlify_space(str, i);
			length = length + 2;
		}
	}
}


void urlify_space(string & str, int index) {
	str[index] = '%';
	str[index + 1] = '2';
	str[index + 2] = '0';
}


#pragma endregion
#pragma region palindrome_permutation


bool palindrome_permutation(string str) {
	if (str.size() == 0) {
		return false;
	}

	int odd_chars = find_odd_chars(str);

	if (odd_chars > 1) {
		return false;
	}
	return true;
}


#pragma endregion
#pragma region find_odd_chars


int find_odd_chars(string str) {
	int char_arr[128] = { 0 };
	int odd_chars = 0;
	for (int i = 0; i < str.size(); i++) {
		if (char_arr[str[i]] % 2 == 0) {
			odd_chars++;
		}
		else {
			odd_chars--;
		}
		char_arr[str[i]]++;
	}
	return odd_chars;
}


#pragma endregion
#pragma region one_away


bool one_away(string str_1, string str_2) {
	if (str_1.size() > str_2.size() + 1 || str_2.size() > str_1.size() + 1) {
		return false;
	}
	
	bool no_changes = true;
	for (int i = 0, j = 0; i < str_1.size() && j < str_2.size(); i++, j++) {
		if (i > str_1.size() + 1 || j > str_2.size() + 1)
		{
			if (str_1[i] == str_2[j + 1]) {
				if (!no_changes) { return false; }
				no_changes = false;
				j++;
			}
			if (str_1[i + 1] == str_2[j]) {
				if (!no_changes) { return false; }
				no_changes = false;
				i++;
			}
		}
		if (str_1[i] != str_2[j]) {
			if (!no_changes) { return false; }
			no_changes = false;
		}
	}
	return true;
}


#pragma endregion
#pragma region string_compression


string string_compression(string str) {
	int it = 0;
	string compressed_string;
	while (it < str.size()) {
		int same_count = 0;
		int char_it = it;
		while (it < str.size() && str[it] == str[char_it]) {
			++same_count;
			++it;
		}
		if (same_count < 1) {
			++it;
		}
		compressed_string += str[it - 1];
		compressed_string += to_string(same_count);
	}
	if (compressed_string.size() < str.size()) {
		return compressed_string;
	}
	return str;
}


#pragma endregion
#pragma region rotate_matrix


void rotate_matrix(vector<vector<int>> & matrix) {
	int layer_depth = matrix.size() / 2;
	for (int layer = 0; layer < layer_depth; ++layer) {
		int iteration_size = matrix.size() - (layer * 2) - 1;
		for (int i = 0; i < iteration_size; i++) {
			int temp = matrix[layer][i + layer];
			matrix[layer][i + layer] = matrix[layer + iteration_size - i][layer];
			matrix[layer + iteration_size - i][layer] = matrix[layer + iteration_size][layer + iteration_size - i];
			matrix[layer + iteration_size][layer + iteration_size - i] = matrix[layer + i][layer + iteration_size];
			matrix[layer + i][layer + iteration_size] = temp;
		}
	}
}


#pragma endregion
#pragma region zero_matrix


void zero_matrix(vector<vector<int>> & matrix) {
	vector<pair<int, int>> zeroes = find_zeroes(matrix);
	for (int i = 0; i < zeroes.size(); ++i) {
		zero_coordinate(matrix, zeroes[i]);
	}
}


vector<pair<int, int>> find_zeroes(vector<vector<int>> matrix) {
	vector<pair<int, int>> zeroes;
	for (int i = 0; i < matrix.size(); ++i) {
		for (int j = 0; j < matrix[0].size(); ++j) {
			if (matrix[i][j] == 0) {
				pair<int, int> coordinates(i, j);
				zeroes.push_back(coordinates);
			}
		}
	}
	return zeroes;
}


void zero_coordinate(vector<vector<int>> & matrix, pair<int, int> point) {
	int row = point.first;
	int column = point.second;
	for (int column_index = 0; column_index < matrix[0].size(); ++column_index) {
		matrix[row][column_index] = 0;
	}
	for (int row_index = 0; row_index < matrix.size(); ++row_index) {
		matrix[row_index][column] = 0;
	}
}


#pragma endregion


#pragma endregion
#pragma region TESTS


#pragma region test_is_unique

void test_is_unique() {
	bool quit = false;
	string test_string;
	printf("Type a string to test if it has all unique characters: \n");

	while (!quit) {
		cin >> test_string;
		if (test_string == "quit") {
			quit = true;
		}
		else if (is_unique(test_string)) {
			printf("String is unique \n");
		}
		else {
			printf("String is not unique \n");
		}
	}
}


#pragma endregion
#pragma region test_is_permutation


void test_is_permutation() {
	bool quit = false;
	string str_1, str_2;
	printf("Type two strings to test if they are permutations: \n");

	while (!quit) {
		cin >> str_1 >> str_2;
		if (str_1 == "quit" || str_2 == "quit") {
			quit = true;
		}
		else if (is_permutation(str_1, str_2)) {
			printf("String is permutation \n");
		}
		else {
			printf("String is not permutation \n");
		}
	}
}


#pragma endregion
#pragma region test_urlify


void test_urlify() {
	bool quit = false;
	string str;
	printf("Type a string to URLify: \n");

	while (!quit) {
		getline(cin, str);
		if (str == "quit") {
			quit = true;
		}
		else {
			urlify_test_string(str);
		}
	}
}


void urlify_test_string(string test_string) {
	int spaces = find_spaces(test_string);
	int test_string_size = test_string.size();
	int end_spaces = 2 * spaces;
	append_white_space(test_string, end_spaces);
	urlify(test_string, test_string_size);
	printf("URLified string: \s\n", test_string);
}


int find_spaces(string str) {
	int spaces = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			++spaces;
		}
	}
	return spaces;
}


void append_white_space(string str, int end_spaces) {
	for (int i = 0; i < end_spaces; i++) {
		str.append(" ");
	}
}


#pragma endregion
#pragma region test_palindrome_permutation


void test_palindrome_permutation() {
	bool quit = false;
	string str;
	printf("Type a strings to test if it is a permutation of a palindrome: \n");

	while (!quit) {
		cin >> str;
		if (str == "quit") {
			quit = true;
		}
		else if (palindrome_permutation(str)) {
			printf("String is permutation \n");
		}
		else {
			printf("String is not permutation \n");
		}
	}
}


#pragma endregion
#pragma region test_one_away


void test_one_away() {
	bool quit = false;
	string str_1, str_2;
	printf("Type two strings to test if they are one string edit different: \n");

	while (!quit) {
		cin >> str_1 >> str_2;
		if (str_1 == "quit" || str_2 == "quit") {
			quit = true;
		}
		else if (one_away(str_1, str_2)) {
			printf("one edit away \n");
		}
		else {
			printf("more than one edit away \n");
		}
	}
}


#pragma endregion
#pragma region test_string_compression


void test_string_compression() {
	bool quit = false;
	string str;
	printf("Type a strings to compress it: \n");

	while (!quit) {
		cin >> str;
		if (str == "quit") {
			quit = true;
		}
		std::cout << string_compression(str) << endl;
	}
}


#pragma endregion
#pragma region test_rotate_matrix


void test_rotate_matrix() {
	int dimension;
	bool quit = false;
	while (!quit) {
		printf("choose matrix dimension (2-7, 0 for exit): ");
		cin >> dimension;
		if (dimension == 0) {
			quit = true;
		}
		else if (dimension > 1 && dimension < 8) {
			vector<vector<int>> matrix = get_matrix(dimension);
			rotate_matrix(matrix);
			print_matrix(matrix);
		}
		else {
			printf("choose a valid optionn\n");
		}
	}
}


vector<vector<int>> get_matrix(int dimension) {
	Matrix matrix;
	switch (dimension)
	{
	case 2:
		return matrix.two;
		break;
	case 3:
		return matrix.three;
		break;
	case 4:
		return matrix.four;
		break;
	case 5:
		return matrix.five;
		break;
	case 6:
		return matrix.six;
		break;
	case 7:
		return matrix.seven;
		break;
	default:
		return matrix.five;
		break;
	}
}


void print_matrix(vector<vector<int>> matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); ++j) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
#pragma endregion
#pragma region test_zero_matrix


void test_zero_matrix() {
	Matrix_With_Zeroes matrix;
	vector<vector<int>> two = matrix.two;
	zero_matrix(two);
	print_matrix(two);

	vector<vector<int>> three = matrix.three;
	zero_matrix(three);
	print_matrix(three);

	vector<vector<int>> four = matrix.four;
	zero_matrix(four);
	print_matrix(four);

	vector<vector<int>> five = matrix.five;
	zero_matrix(five);
	print_matrix(five);

	vector<vector<int>> six = matrix.six;
	zero_matrix(six);
	print_matrix(six);

	vector<vector<int>> seven = matrix.seven;
	zero_matrix(seven);
	print_matrix(seven);
}


#pragma endregion


#pragma endregion