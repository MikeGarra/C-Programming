#include <iostream>
#include <vector> //Remember to put this #include when using vectors

using namespace std;

int main() {
    
    vector <int> test_scores {100, 95, 99,87, 88};
    
    //The '.at()' works like 'test_scores[]' calling the 
    //index position for the array.
    cout << "First score at index 0: " << test_scores.at(0) << endl;
    cout << "Second score at index 1: " << test_scores.at(1) << endl;
    cout << "Third score at index 2: " << test_scores.at(2) << endl;
    cout << "Fourth score at index 3: " << test_scores.at(3) << endl;
    cout << "Fifth score at index 4: " << test_scores.at(4) << endl;
    
    //vector <char> vowels;      //empty vector
    //vector <char> vowels (5);  //initialized vector with '5' indecies
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    
    cout << "\n" << vowels[0] << endl;
    cout << vowels[4] << endl;
    
    vector <int> test_scores2 {100, 98, 89};
    cout << "\nUsing array syntax:" << endl;
    cout << test_scores2[0] << endl;
    cout << test_scores2[1] << endl;
    cout << test_scores2[2] << endl;
    
    cout << "\nUsing vector syntax:" << endl;
    cout << test_scores2.at(0) << endl;
    cout << test_scores2.at(1) << endl;
    cout << test_scores2.at(2) << endl;
    cout << "\nThere are " << test_scores2.size() << " scores in the vector."
         << endl;
    
    cout << "\nEnter 3 Test scores:" << endl;
    cin >> test_scores2.at(0);
    cin >> test_scores2.at(1);
    cin >> test_scores2.at(2);
    
    cout << "\nUpdated test_scores2:" << endl;
    cout << test_scores2.at(0) << endl;
    cout << test_scores2.at(1) << endl;
    cout << test_scores2.at(2) << endl; 
    
    cout << "\nEnter a test scoe to add to the vector:" << endl;
    int score_to_add {0};
    cin >> score_to_add;
    
    test_scores2.push_back(score_to_add);
    
    cout << "\nEnter one more test score to add to the vector." << endl;
    cin >> score_to_add;
    
    test_scores2.push_back(score_to_add);
    
    cout << "\nTest scores are now" << endl;
    cout << test_scores2.at(0) << endl;
    cout << test_scores2.at(1) << endl;
    cout << test_scores2.at(2) << endl;    
    cout << test_scores2.at(3) << endl;
    cout << test_scores2.at(4) << endl;
    
    cout << "\nThere are now " << test_scores2.size() 
         << " scores in the vector." << endl;
         
  cout << "This should cause and exception!!" << test_scores2.at(10);
    
    //Example of a 2D-vector
    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    
    cout << "\nHere are the movie ratings from reviewer #1 " 
         << "using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << "\nHere are the movie ratings from reviewer #2 " 
         << "using vector syntax:" << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;
    
    cout << "\nHere are the movie ratings from reviewer #3 " 
         << "using vector syntax:" << endl;
    cout << movie_ratings.at(2).at(0) << endl;
    cout << movie_ratings.at(2).at(1) << endl;
    cout << movie_ratings.at(2).at(2) << endl;
    cout << movie_ratings.at(2).at(3) << endl;
    
    return 0;
}