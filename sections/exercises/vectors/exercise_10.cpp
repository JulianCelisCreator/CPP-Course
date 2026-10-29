        //
        // Created by julian-celis on 10/26/26.
        //

        #include <vector>
        #include <iostream>

        using namespace std;


        void solver (std::vector<std::vector<int>> &matriz){

            int top = 0;
            int bottom = matriz.size()-1;

            int left = 0;
            int right =  matriz[0].size()-1;

            int layer = 0;

            while (top<=bottom && left <=right){
                // Determine our direction clockwise
                if(layer%2==0) {
                    cout<<"Layer number: "<< layer + 1<<"\n";
                    //First row
                    for(int j=left; j<=right;j++){
                        std::cout<<matriz[top][j];
                    }
                    top+=1;

                    // right Column
                    for(int i=top;i<=bottom;i++){
                        std::cout<<matriz[i][right];
                    }
                    right-=1;
                    // Bottom row
                    if (top<=bottom) {
                        for (int j=right;j>=left;j--) {
                            std::cout<<matriz[bottom][j];
                        }
                        bottom-=1;
                    }


                    // left row
                    if (left<=right) {
                        for(int i=bottom;i>=top;i--){
                            std::cout<<matriz[i][left];
                        }
                        left++;
                    }
                }
                else{
                    // first column
                    for (int i=top;i<=bottom;++i) {
                        std::cout<<matriz[i][left];
                    }
                    left+=1;
                    //  first  row
                    for (int j=left;j<=right;++j) {
                        std::cout<<matriz[bottom][j];
                    }
                    bottom-=1;
                    if (left<=right) {
                        // second column
                        for (int i=bottom;i>=top;--i) {
                            std::cout<<matriz[i][right];
                        }
                        right-=1;
                    }
                    if (top<=bottom) {
                        // second row
                        for (int j=right;j>=left;--j) {
                            std::cout<<matriz[top][j];
                        }
                        top++;
                    }
                }
                    layer++;
            }
        }

        int main () {
            std::vector<std::vector<int>> matriz_prueba =
                {{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16}
                };
            solver(matriz_prueba);
            return 0;
        }
