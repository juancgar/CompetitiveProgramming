 int numJewelsInStones(string J, string S) {
        //put all the jewels in a hash table of J position depending on the kinds of jewels you have
        
        
        map<char,int> JewelMap;
        //save the state of a jewel
        for(auto i : J)
        {
            JewelMap[i] = 0;
        }
        //start counter of to find the quantity of jewels
        int total = 0;
        // add 1 to the counter if the jewel is in the map
        for(int i : S)
        {
            if(JewelMap.count(i) > 0)
            {
                JewelMap[i]++;
                total++;
            }
        }
        
        return total;
    }