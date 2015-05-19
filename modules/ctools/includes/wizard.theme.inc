<<<<<<< HEAD
<?php

/**
 * @file
 * Themable for the wizard tool.
 */

function ctools_wizard_theme(&$theme) {
  $theme['ctools_wizard_trail'] = array(
    'variables' => array('trail' => NULL, 'form_info' => NULL, 'divider' => ' » '),
    'file' => 'includes/wizard.theme.inc',
  );
}

/**
 * Themable display of the 'breadcrumb' trail to show the order of the forms.
 */
function theme_ctools_wizard_trail($vars) {
  if (!empty($vars['trail'])) {
    return '<div class="wizard-trail">' . implode($vars['divider'], $vars['trail']) . '</div>';
  }
}
=======
<?php

/**
 * @file
 * Themable for the wizard tool.
 */

function ctools_wizard_theme(&$theme) {
  $theme['ctools_wizard_trail'] = array(
    'variables' => array('trail' => NULL, 'form_info' => NULL, 'divider' => ' » '),
    'file' => 'includes/wizard.theme.inc',
  );
}

/**
 * Themable display of the 'breadcrumb' trail to show the order of the forms.
 */
function theme_ctools_wizard_trail($vars) {
  if (!empty($vars['trail'])) {
    return '<div class="wizard-trail">' . implode($vars['divider'], $vars['trail']) . '</div>';
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
