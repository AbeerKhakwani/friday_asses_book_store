<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_handler_sort_ncs_last_updated.
 */

/**
 * Sort handler for the newer of last comment / node updated.
 *
 * @ingroup views_sort_handlers
 */
class views_handler_sort_ncs_last_updated extends views_handler_sort_date {
  function query() {
    $this->ensure_my_table();
    $this->node_table = $this->query->ensure_table('node', $this->relationship);
    $this->field_alias = $this->query->add_orderby(NULL, "GREATEST(" . $this->node_table . ".changed, " . $this->table_alias . ".last_comment_timestamp)", $this->options['order'], $this->table_alias . '_' . $this->field);
  }
}
=======
<?php

/**
 * @file
 * Definition of views_handler_sort_ncs_last_updated.
 */

/**
 * Sort handler for the newer of last comment / node updated.
 *
 * @ingroup views_sort_handlers
 */
class views_handler_sort_ncs_last_updated extends views_handler_sort_date {
  function query() {
    $this->ensure_my_table();
    $this->node_table = $this->query->ensure_table('node', $this->relationship);
    $this->field_alias = $this->query->add_orderby(NULL, "GREATEST(" . $this->node_table . ".changed, " . $this->table_alias . ".last_comment_timestamp)", $this->options['order'], $this->table_alias . '_' . $this->field);
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
