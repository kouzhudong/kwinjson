# kwinjson
json libs for windows driver

为何有此仓库？  

在驱动中上抛信息给应用层是一个常见的操作。  

这里常见的信息有，文件的完整的路径，  
类似的还是有进程的完整路径，进程的命令行，注册表的完整路径。  
比如：文件的路径的极限是32768个字符，如果是宽字符呢？还得加倍。  
注册表的至少也是1024，这个不是完整的还是一个KEY，完整的呢？会更长，特别是多层级的时候。  

这，都出现一个问题，如何表示和传输呢？  
用字符数组，这也未免太浪费了。  

即使在驱动中用std:string存储，但传送的时候还是会出现这个问题。  

一个改进的思路是TLV，但是自己没有发现微软和网上有这样的库，特别是出名和适合内核的。  

google的protobuf只有C++版本，没有C的。  
如果在驱动支持C++，甚至是STL，这有点太不放心了。  

但是如果改写google的protobuf支持C，这也太庞大了。  

ASN1 DER格式虽然有几个解析的库，但是这个格式也不简单，除非解析时用，一般不建议自己生成这种格式。  

还有失宠的XML。  

后来，发现有人改写了json的驱动实现，所以有此文。  

--------------------------------------------------------------------------------------------------

此仓库的原则：  
1. 先改写著名的json库。  
2. 先改写c的，后改写c++的。  
3. 尽量不修改原来工程。  

--------------------------------------------------------------------------------------------------
