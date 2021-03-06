<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_handler_filter_vocabulary_machine_name.
 */

/**
 * Filter by vocabulary machine name.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_vocabulary_machine_name extends views_handler_filter_in_operator {
  function get_value_options() {
    if (isset($this->value_options)) {
      return;
    }

    $this->value_options = array();
    $vocabularies = taxonomy_get_vocabularies();
    foreach ($vocabularies as $voc) {
      $this->value_options[$voc->machine_name] = $voc->name;
    }
  }
}
=======
<?php

/**
 * @file
 * Definition of views_handler_filter_vocabulary_machine_name.
 */

/**
 * Filter by vocabulary machine name.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_vocabulary_machine_name extends views_handler_filter_in_operator {
  function get_value_options() {
    if (isset($this->value_options)) {
      return;
    }

    $this->value_options = array();
    $vocabularies = taxonomy_get_vocabularies();
    foreach ($vocabularies as $voc) {
      $this->value_options[$voc->machine_name] = $voc->name;
    }
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
