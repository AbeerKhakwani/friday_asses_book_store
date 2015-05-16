<<<<<<< HEAD
<?php

/**
 * @file
 * Views wizard for managed file views.
 */

$plugin = array(
  'name' => 'file_managed',
  'base_table' => 'file_managed',
  'created_column' => 'timestamp',
  'form_wizard_class' => array(
    'file' => 'views_ui_file_managed_views_wizard.class.php',
    'class' => 'ViewsUiFileManagedViewsWizard',
  ),
  'title' => t('Files'),
  'filters' => array(
  ),
  'path_field' => array(
    'id' => 'uri',
    'table' => 'file_managed',
    'field' => 'uri',
    'exclude' => TRUE,
    'file_download_path' => TRUE,
  ),
);
=======
<?php

/**
 * @file
 * Views wizard for managed file views.
 */

$plugin = array(
  'name' => 'file_managed',
  'base_table' => 'file_managed',
  'created_column' => 'timestamp',
  'form_wizard_class' => array(
    'file' => 'views_ui_file_managed_views_wizard.class.php',
    'class' => 'ViewsUiFileManagedViewsWizard',
  ),
  'title' => t('Files'),
  'filters' => array(
  ),
  'path_field' => array(
    'id' => 'uri',
    'table' => 'file_managed',
    'field' => 'uri',
    'exclude' => TRUE,
    'file_download_path' => TRUE,
  ),
);
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
