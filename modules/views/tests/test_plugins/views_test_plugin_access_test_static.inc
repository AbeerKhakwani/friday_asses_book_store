<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_test_plugin_access_test_static.
 */

/**
 * Tests a static access plugin.
 */
class views_test_plugin_access_test_static extends views_plugin_access {
  function option_definition() {
    $options = parent::option_definition();
    $options['access'] = array('default' => FALSE, 'bool' => TRUE);

    return $options;
  }

  function access($account) {
    return !empty($this->options['access']);
  }

  function get_access_callback() {
    return array('views_test_test_static_access_callback', array(!empty($options['access'])));
  }
}
=======
<?php

/**
 * @file
 * Definition of views_test_plugin_access_test_static.
 */

/**
 * Tests a static access plugin.
 */
class views_test_plugin_access_test_static extends views_plugin_access {
  function option_definition() {
    $options = parent::option_definition();
    $options['access'] = array('default' => FALSE, 'bool' => TRUE);

    return $options;
  }

  function access($account) {
    return !empty($this->options['access']);
  }

  function get_access_callback() {
    return array('views_test_test_static_access_callback', array(!empty($options['access'])));
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
