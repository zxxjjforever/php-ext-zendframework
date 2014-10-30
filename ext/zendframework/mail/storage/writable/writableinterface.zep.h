
extern zend_class_entry *zendframework_mail_storage_writable_writableinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_Mail_Storage_Writable_WritableInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_mail_storage_writable_writableinterface_createfolder, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, parentFolder)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_mail_storage_writable_writableinterface_removefolder, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_mail_storage_writable_writableinterface_renamefolder, 0, 0, 2)
	ZEND_ARG_INFO(0, oldName)
	ZEND_ARG_INFO(0, newName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_mail_storage_writable_writableinterface_appendmessage, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, folder)
	ZEND_ARG_ARRAY_INFO(0, flags, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_mail_storage_writable_writableinterface_copymessage, 0, 0, 2)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_INFO(0, folder)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_mail_storage_writable_writableinterface_movemessage, 0, 0, 2)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_INFO(0, folder)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zendframework_mail_storage_writable_writableinterface_setflags, 0, 0, 2)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_ARRAY_INFO(0, flags, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zendframework_mail_storage_writable_writableinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_Mail_Storage_Writable_WritableInterface, createFolder, arginfo_zendframework_mail_storage_writable_writableinterface_createfolder)
	PHP_ABSTRACT_ME(ZendFramework_Mail_Storage_Writable_WritableInterface, removeFolder, arginfo_zendframework_mail_storage_writable_writableinterface_removefolder)
	PHP_ABSTRACT_ME(ZendFramework_Mail_Storage_Writable_WritableInterface, renameFolder, arginfo_zendframework_mail_storage_writable_writableinterface_renamefolder)
	PHP_ABSTRACT_ME(ZendFramework_Mail_Storage_Writable_WritableInterface, appendMessage, arginfo_zendframework_mail_storage_writable_writableinterface_appendmessage)
	PHP_ABSTRACT_ME(ZendFramework_Mail_Storage_Writable_WritableInterface, copyMessage, arginfo_zendframework_mail_storage_writable_writableinterface_copymessage)
	PHP_ABSTRACT_ME(ZendFramework_Mail_Storage_Writable_WritableInterface, moveMessage, arginfo_zendframework_mail_storage_writable_writableinterface_movemessage)
	PHP_ABSTRACT_ME(ZendFramework_Mail_Storage_Writable_WritableInterface, setFlags, arginfo_zendframework_mail_storage_writable_writableinterface_setflags)
  PHP_FE_END
};