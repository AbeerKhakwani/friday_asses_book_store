<<<<<<< HEAD
<?php

/**
 * Delegated implementation of hook_menu().
 */
function ctools_export_ui_menu(&$items) {
  ctools_include('export-ui');

  // If a menu rebuild is triggered because of module enable/disable,
  // this might be out of date. Reset the cache.
  ctools_include('plugins');
  ctools_get_plugins_reset();

  foreach (ctools_get_export_uis() as $plugin) {
    // We also need to make sure that the module hasn't been disabled. During
    // the disable process, the module's plugins still still appear.
    if ($plugin['has menu'] && module_exists($plugin['module'])) {
      $handler = ctools_export_ui_get_handler($plugin);
      if ($handler) {
        $handler->hook_menu($items);
      }
    }
  }
}
=======
<?php

/**
 * Delegated implementation of hook_menu().
 */
function ctools_export_ui_menu(&$items) {
  ctools_include('export-ui');

  // If a menu rebuild is triggered because of module enable/disable,
  // this might be out of date. Reset the cache.
  ctools_include('plugins');
  ctools_get_plugins_reset();

  foreach (ctools_get_export_uis() as $plugin) {
    // We also need to make sure that the module hasn't been disabled. During
    // the disable process, the module's plugins still still appear.
    if ($plugin['has menu'] && module_exists($plugin['module'])) {
      $handler = ctools_export_ui_get_handler($plugin);
      if ($handler) {
        $handler->hook_menu($items);
      }
    }
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
