<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_handler_filter_aggregator_category_cid.
 */

/**
 * Filter by aggregator category cid
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_aggregator_category_cid extends views_handler_filter_in_operator {
  function get_value_options() {
    if (isset($this->value_options)) {
      return;
    }

    $this->value_options = array();

    $result = db_query('SELECT * FROM {aggregator_category} ORDER BY title');
    foreach ($result as $category) {
      $this->value_options[$category->cid] = $category->title;
    }
  }
}
=======
<?php

/**
 * @file
 * Definition of views_handler_filter_aggregator_category_cid.
 */

/**
 * Filter by aggregator category cid
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_aggregator_category_cid extends views_handler_filter_in_operator {
  function get_value_options() {
    if (isset($this->value_options)) {
      return;
    }

    $this->value_options = array();

    $result = db_query('SELECT * FROM {aggregator_category} ORDER BY title');
    foreach ($result as $category) {
      $this->value_options[$category->cid] = $category->title;
    }
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
