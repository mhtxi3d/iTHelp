/**=============================================================================+
 * file name: tea.cpp
 * created  : 2019.09.05
+=============================================================================*/
#include <memory>
#include "tea.h"

namespace ithelp {


class TeaImpl
{
public:
	TeaImpl() = default;
	virtual ~TeaImpl() = default;
};


std::unique_ptr<Tea> MakeTea(TeaKind kind)
{
	return std::unique_ptr<Tea>();
}

//
// Tea class
//

} // namespace 'ithelp'
