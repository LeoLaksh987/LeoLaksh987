class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        int arr[26]={0};
    
    
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }
    
    
    int maxim=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxim<arr[i]){
            //It return index 
            ans=i;
            
            //It returns the count of the character at that particular index
            maxim=arr[i];
        }
    }
    return 'a'+ ans;
    }

};
