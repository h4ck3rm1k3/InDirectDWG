
template <class T> class OdRxObjectImpl
{

};

class OdStreamBuf
{
};
class OdString
{
 public:
  bool isEmpty();
};

class OdCodePageId{};
class OdDbBlockTableRecordPtr{};
class  OdDbDatabasePtr{};
class OdDbObjectId{};
class OdDbViewportPtr{};
class OdGsDevicePtr{};
class OdInt32{
 public:
  OdInt32(long int);
};
class OdInt64{};
//class OdRdFileBufPtr{};
class OdResult{};
class OdStreamBufPtr{};
class OdUInt32{};
class OdUInt64{};
class OdUInt8{};
//class OdWrFileBufPtr{};

class OdDb
{
 public:
  class FilerSeekType{};
};

typedef enum test 
  {

    eNotImplemented,
  } somthing;


#define ODRX_USING_HEAP_OPERATORS(X)
class OdChar{};
class OdTtfDescriptor {};
class OdHatchPatternManager{};
class OdDbObjectPtr {};
class OdPassword {};
namespace Oda
{


  typedef enum _FileShareMode
  {
    kShareDenyNo,

    kOdRxObjAttach
  } FileShareMode;
  
  typedef enum _FileAccessMode {
    kFileWrite,
    kFileRead,
    
  } FileAccessMode;

  typedef enum _FileCreationDisposition{
    kCreateAlways,
    kOpenExisting
  } FileCreationDisposition;

  
};

using namespace Oda;
template <class T> class OdSmartPtr
{
 public:
  OdSmartPtr(T *, Oda::_FileCreationDisposition);
  OdSmartPtr(T *, Oda::_FileShareMode);

};


class OdDbHostAppServices2
{};
class OdDbSystemServices
{};
class OdDbHostAppServices
{
 public :
  void readFile();
  void readFile(const OdChar*&, bool&, bool&, Oda::FileShareMode&, const OdPassword&);
  

};
