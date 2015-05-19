<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_handler_argument_taxonomy.
 */

/**
 * Argument handler for basic taxonomy tid.
 *
 * @ingroup views_argument_handlers
 */
class views_handler_argument_taxonomy extends views_handler_argument_numeric {

  /**
   * Override the behavior of title(). Get the title of the node.
   */
  function title() {
    // There might be no valid argument.
    if ($this->argument) {
      $term = taxonomy_term_load($this->argument);
      if (!empty($term)) {
        return check_plain($term->name);
      }
    }
    // TODO review text
    return t('No name');
  }
}
=======
<?php

/**
 * @file
 * Definition of views_handler_argument_taxonomy.
 */

/**
 * Argument handler for basic taxonomy tid.
 *
 * @ingroup views_argument_handlers
 */
class views_handler_argument_taxonomy extends views_handler_argument_numeric {

  /**
   * Override the behavior of title(). Get the title of the node.
   */
  function title() {
    // There might be no valid argument.
    if ($this->argument) {
      $term = taxonomy_term_load($this->argument);
      if (!empty($term)) {
        return check_plain($term->name);
      }
    }
    // TODO review text
    return t('No name');
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
