<<<<<<< HEAD
<?php

/**
 * @file
 * Provide node vid argument handler.
 */

/**
 * Argument handler to accept a node revision id.
 */
class views_handler_argument_node_vid extends views_handler_argument_numeric {
  // No constructor is necessary.

  /**
   * Override the behavior of title(). Get the title of the revision.
   */
  function title_query() {
    $titles = array();

    $result = db_query("SELECT n.title FROM {node_revision} n WHERE n.vid IN (:vids)", array(':vids' => $this->value));
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
 * Provide node vid argument handler.
 */

/**
 * Argument handler to accept a node revision id.
 */
class views_handler_argument_node_vid extends views_handler_argument_numeric {
  // No constructor is necessary.

  /**
   * Override the behavior of title(). Get the title of the revision.
   */
  function title_query() {
    $titles = array();

    $result = db_query("SELECT n.title FROM {node_revision} n WHERE n.vid IN (:vids)", array(':vids' => $this->value));
    foreach ($result as $term) {
      $titles[] = check_plain($term->title);
    }
    return $titles;
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
