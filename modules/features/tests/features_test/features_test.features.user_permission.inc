<<<<<<< HEAD
<?php
/**
 * @file
 * features_test.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_test_user_default_permissions() {
  $permissions = array();

  // Exported permission: create features_test content.
  $permissions['create features_test content'] = array(
    'name' => 'create features_test content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
=======
<?php
/**
 * @file
 * features_test.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_test_user_default_permissions() {
  $permissions = array();

  // Exported permission: create features_test content.
  $permissions['create features_test content'] = array(
    'name' => 'create features_test content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
