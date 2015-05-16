<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_handler_filter_comment_user_uid.
 */

/**
 * Filter handler to accept a user id to check for nodes that user posted or
 * commented on.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_comment_user_uid extends views_handler_filter_user_name {
  function query() {
    $this->ensure_my_table();

    $subselect = db_select('comment', 'c');
    $subselect->addField('c', 'cid');
    $subselect->condition('c.uid', $this->value, $this->operator);
    $subselect->where("c.nid = $this->table_alias.nid");

    $condition = db_or()
      ->condition("$this->table_alias.uid", $this->value, $this->operator)
      ->exists($subselect);

    $this->query->add_where($this->options['group'], $condition);
  }
}
=======
<?php

/**
 * @file
 * Definition of views_handler_filter_comment_user_uid.
 */

/**
 * Filter handler to accept a user id to check for nodes that user posted or
 * commented on.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_comment_user_uid extends views_handler_filter_user_name {
  function query() {
    $this->ensure_my_table();

    $subselect = db_select('comment', 'c');
    $subselect->addField('c', 'cid');
    $subselect->condition('c.uid', $this->value, $this->operator);
    $subselect->where("c.nid = $this->table_alias.nid");

    $condition = db_or()
      ->condition("$this->table_alias.uid", $this->value, $this->operator)
      ->exists($subselect);

    $this->query->add_where($this->options['group'], $condition);
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
