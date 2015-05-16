<<<<<<< HEAD
<?php
/**
 * @file
 * site_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
=======
<?php
/**
 * @file
 * site_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
