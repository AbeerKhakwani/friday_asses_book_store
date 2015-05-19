<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_handler_argument_locale_language.
 */

/**
 * Argument handler to accept a language.
 *
 * @ingroup views_argument_handlers
 */
class views_handler_argument_locale_language extends views_handler_argument {
  function construct() {
    parent::construct('language');
  }

  /**
   * Override the behavior of summary_name(). Get the user friendly version
   * of the language.
   */
  function summary_name($data) {
    return $this->locale_language($data->{$this->name_alias});
  }

  /**
   * Override the behavior of title(). Get the user friendly version
   * of the language.
   */
  function title() {
    return $this->locale_language($this->argument);
  }

  function locale_language($langcode) {
    $languages = views_language_list();
    return isset($languages[$langcode]) ? $languages[$langcode] : t('Unknown language');
  }
}
=======
<?php

/**
 * @file
 * Definition of views_handler_argument_locale_language.
 */

/**
 * Argument handler to accept a language.
 *
 * @ingroup views_argument_handlers
 */
class views_handler_argument_locale_language extends views_handler_argument {
  function construct() {
    parent::construct('language');
  }

  /**
   * Override the behavior of summary_name(). Get the user friendly version
   * of the language.
   */
  function summary_name($data) {
    return $this->locale_language($data->{$this->name_alias});
  }

  /**
   * Override the behavior of title(). Get the user friendly version
   * of the language.
   */
  function title() {
    return $this->locale_language($this->argument);
  }

  function locale_language($langcode) {
    $languages = views_language_list();
    return isset($languages[$langcode]) ? $languages[$langcode] : t('Unknown language');
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
