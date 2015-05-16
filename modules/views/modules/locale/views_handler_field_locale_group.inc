<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_handler_field_locale_group.
 */

/**
 * Field handler to translate a group into its readable form.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_locale_group extends views_handler_field {
  function render($values) {
    $groups = module_invoke_all('locale', 'groups');
    // Sort the list.
    asort($groups);
    $value = $this->get_value($values);
    return isset($groups[$value]) ? $groups[$value] : '';
  }
}
=======
<?php

/**
 * @file
 * Definition of views_handler_field_locale_group.
 */

/**
 * Field handler to translate a group into its readable form.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_locale_group extends views_handler_field {
  function render($values) {
    $groups = module_invoke_all('locale', 'groups');
    // Sort the list.
    asort($groups);
    $value = $this->get_value($values);
    return isset($groups[$value]) ? $groups[$value] : '';
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
