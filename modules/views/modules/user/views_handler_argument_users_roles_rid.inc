<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_handler_argument_users_roles_rid.
 */

/**
 * Allow role ID(s) as argument.
 *
 * @ingroup views_argument_handlers
 */
class views_handler_argument_users_roles_rid extends views_handler_argument_many_to_one {
  function title_query() {
    $titles = array();

    $result = db_query("SELECT name FROM {role} WHERE rid IN (:rids)", array(':rids' => $this->value));
    foreach ($result as $term) {
      $titles[] = check_plain($term->name);
    }
    return $titles;
  }
}
=======
<?php

/**
 * @file
 * Definition of views_handler_argument_users_roles_rid.
 */

/**
 * Allow role ID(s) as argument.
 *
 * @ingroup views_argument_handlers
 */
class views_handler_argument_users_roles_rid extends views_handler_argument_many_to_one {
  function title_query() {
    $titles = array();

    $result = db_query("SELECT name FROM {role} WHERE rid IN (:rids)", array(':rids' => $this->value));
    foreach ($result as $term) {
      $titles[] = check_plain($term->name);
    }
    return $titles;
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
