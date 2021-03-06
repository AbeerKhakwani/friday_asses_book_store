<<<<<<< HEAD
<?php

/**
 * @file
 * Plugin to provide an relationship handler for term from node.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('User category edit form from user'),
  'keyword' => 'user_category_form',
  'description' => t('Adds user category edit form from a user context.'),
  'required context' => new ctools_context_required(t('User'), 'user'),
  'context' => 'ctools_user_category_edit_form_from_user_context',
);

/**
 * Return a new context based on an existing context.
 */
function ctools_user_category_edit_form_from_user_context($context, $conf) {
  if (empty($context->data)) {
    return ctools_context_create_empty('user_edit_form', NULL);
  }

  if (isset($context->data->user_category)) {
    return ctools_context_create('user_edit_form', $context->data, array('category' => $context->data->user_category));
  }
}
=======
<?php

/**
 * @file
 * Plugin to provide an relationship handler for term from node.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('User category edit form from user'),
  'keyword' => 'user_category_form',
  'description' => t('Adds user category edit form from a user context.'),
  'required context' => new ctools_context_required(t('User'), 'user'),
  'context' => 'ctools_user_category_edit_form_from_user_context',
);

/**
 * Return a new context based on an existing context.
 */
function ctools_user_category_edit_form_from_user_context($context, $conf) {
  if (empty($context->data)) {
    return ctools_context_create_empty('user_edit_form', NULL);
  }

  if (isset($context->data->user_category)) {
    return ctools_context_create('user_edit_form', $context->data, array('category' => $context->data->user_category));
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
