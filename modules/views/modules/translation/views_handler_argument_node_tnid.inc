<<<<<<< HEAD
<?php

/**
 * @file
 * Provide node tnid argument handler.
 */

/**
 * Argument handler to accept a node translation id.
 *
 * @ingroup views_argument_handlers
 */
class views_handler_argument_node_tnid extends views_handler_argument_numeric {
  /**
   * Override the behavior of title(). Get the title of the node.
   */
  function title_query() {
    $titles = array();

    $result = db_query("SELECT n.title FROM {node} n WHERE n.tnid IN (:tnids)", array(':tnids' => $this->value));
    foreach ($result as $term) {
      $titles[] = check_plain($term->title);
    }
    return $titles;
  }
}
=======
<?php

/**
 * @file
 * Provide node tnid argument handler.
 */

/**
 * Argument handler to accept a node translation id.
 *
 * @ingroup views_argument_handlers
 */
class views_handler_argument_node_tnid extends views_handler_argument_numeric {
  /**
   * Override the behavior of title(). Get the title of the node.
   */
  function title_query() {
    $titles = array();

    $result = db_query("SELECT n.title FROM {node} n WHERE n.tnid IN (:tnids)", array(':tnids' => $this->value));
    foreach ($result as $term) {
      $titles[] = check_plain($term->title);
    }
    return $titles;
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
