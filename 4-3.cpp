int i=0,Data[100];
bool IsBST ( BinTree T ){
    if(!T){
        return true;
    }
    if(!T->Left && !T->Right){
        return true;
    }
    int j=0;
    int flag = 0;
    InOrder(T);
    for( ;j<i-1 ;j++){
        if(Data[j+1] < Data[j]){
            return false;
        }
    }
    return true;
}

void InOrder(BinTree T){
    if(T){
        InOrder(T->Left);
        Data[i++] = T->Data;
        InOrder(T->Right);
    } 
}
