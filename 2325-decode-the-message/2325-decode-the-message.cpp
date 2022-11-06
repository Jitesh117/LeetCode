class Solution {
public:
    string decodeMessage(string key, string message) {
       unordered_map<char, char> keyMap;
        string alphabets = "abcdefghijklmnopqrstuvwxyz";
        keyMap[' '] = ' ';
        int index = 0;
        for(int i = 0; i < key.size(); i++){
            if(keyMap[key[i]] == 0){
                keyMap[key[i]] = alphabets[index];
                index++;
            }
        }
        
        for(int i = 0; i<message.size();i++){
            message[i] = keyMap[message[i]];
        }
        
        return message; 
    }
};