#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
class File : public IComposable
{
    private:

    public:
        File(std::string nodeName)
        {
        }

        virtual ~File(){}

        void list(int depth)//operation
        {
        }

        void add(IComposable* component)
        {
        }

        void remove(IComposable* component)
        {
        }

        IComposable* getChild(int key)
        {
        }
};


#endif // FILE_H_INCLUDED
