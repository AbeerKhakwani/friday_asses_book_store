<<<<<<< HEAD
<?php

/**
 * @file
 * Contains the numeric argument validator plugin.
 */

/**
 * Validate whether an argument is numeric or not.
 *
 * @ingroup views_argument_validate_plugins
 */
class views_plugin_argument_validate_numeric extends views_plugin_argument_validate {
  function validate_argument($argument) {
    return is_numeric($argument);
  }
}
=======
<?php

/**
 * @file
 * Contains the numeric argument validator plugin.
 */

/**
 * Validate whether an argument is numeric or not.
 *
 * @ingroup views_argument_validate_plugins
 */
class views_plugin_argument_validate_numeric extends views_plugin_argument_validate {
  function validate_argument($argument) {
    return is_numeric($argument);
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
