class Solution {
public:
    bool isvalid(vector<vector<int>>& image, int sr, int sc, int color)
    {
        if(sr>=image.size()||sc>=image[0].size()||sr<0||sc<0) return false;
        return true;
    }
  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int newe=image[sr][sc];
        if(newe==color) return image;
        image[sr][sc]=color;
     if(isvalid(image,sr+1,sc,color)&&image[sr+1][sc]==newe){ floodFill(image,sr+1,sc,color);  }
     if(isvalid(image,sr-1,sc,color)&&image[sr-1][sc]==newe){ floodFill(image,sr-1,sc,color);  }
     if(isvalid(image,sr,sc+1,color)&&image[sr][sc+1]==newe){ floodFill(image,sr,sc+1,color);  }
     if(isvalid(image,sr,sc-1,color)&&image[sr][sc-1]==newe){ floodFill(image,sr,sc-1,color);  }
        return image;
    }
};