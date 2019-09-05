#ifndef FOLDER_H_INCLUDED
#define FOLDER_H_INCLUDED
class Folder : public IComposable
{
    private:

    public:
        Folder(std::string nodeName)
        {
        std:: string  m_nodeName = nodeName;
        }

        virtual ~Folder(){}

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


#endif // FOLDER_H_INCLUDED
