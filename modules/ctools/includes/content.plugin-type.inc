<<<<<<< HEAD
<?php

/**
 * @file
 * Contains plugin type registration information for the content tool.
 */

function ctools_content_plugin_type(&$items) {
  $items['content_types'] = array(
    'cache' => FALSE,
    'process' => array(
      'function' => 'ctools_content_process',
      'file' => 'content.inc',
      'path' => drupal_get_path('module', 'ctools') . '/includes',
    ),
  );
=======
<?php

/**
 * @file
 * Contains plugin type registration information for the content tool.
 */

function ctools_content_plugin_type(&$items) {
  $items['content_types'] = array(
    'cache' => FALSE,
    'process' => array(
      'function' => 'ctools_content_process',
      'file' => 'content.inc',
      'path' => drupal_get_path('module', 'ctools') . '/includes',
    ),
  );
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
}