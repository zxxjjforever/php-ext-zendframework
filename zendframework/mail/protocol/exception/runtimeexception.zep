/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/

namespace Zend\Mail\Protocol\Exception;

use Zend\Mail\Exception\RuntimeException as MailRuntimeException;

/**
 * Exception for Zend\Mail component.
 */
class RuntimeException extends MailRuntimeException implements ExceptionInterface
{
}