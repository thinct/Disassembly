#include <vector>

struct A
{
    int nNum;
    int* pNum;
};


int main()
{
    int* p = new int(0x123);
    A* pA = new A;
    pA->pNum = p;
    pA->nNum = 0x888;
	

    int* p2 = pA->pNum;

    A aObj;
    aObj.nNum = 0x456;
    aObj.pNum = new int(0x987);
    

    std::vector<A> vec;
    vec.push_back(*pA);
    vec.push_back(aObj);

    for (unsigned int i = 0; i < vec.size(); i++)
    {
        printf("%d, %d\n", vec[i].nNum, *(vec[i].pNum));
    }

    printf("game over!");

    return 0;
}