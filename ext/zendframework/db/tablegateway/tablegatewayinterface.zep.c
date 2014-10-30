
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/
ZEPHIR_INIT_CLASS(ZendFramework_Db_TableGateway_TableGatewayInterface) {

	ZEPHIR_REGISTER_INTERFACE(Zend\\Db\\TableGateway, TableGatewayInterface, zendframework, db_tablegateway_tablegatewayinterface, zendframework_db_tablegateway_tablegatewayinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(ZendFramework_Db_TableGateway_TableGatewayInterface, getTable);

ZEPHIR_DOC_METHOD(ZendFramework_Db_TableGateway_TableGatewayInterface, select);

ZEPHIR_DOC_METHOD(ZendFramework_Db_TableGateway_TableGatewayInterface, insert);

ZEPHIR_DOC_METHOD(ZendFramework_Db_TableGateway_TableGatewayInterface, update);

ZEPHIR_DOC_METHOD(ZendFramework_Db_TableGateway_TableGatewayInterface, delete);
