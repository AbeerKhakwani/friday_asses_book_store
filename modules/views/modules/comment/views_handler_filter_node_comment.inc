<<<<<<< HEAD
<?php

/**
 * @file
 * Definition of views_handler_filter_node_comment.
 */

/**
 * Filter based on comment node status.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_node_comment extends views_handler_filter_in_operator {
  function get_value_options() {
    $this->value_options = array(
      COMMENT_NODE_HIDDEN => t('Hidden'),
      COMMENT_NODE_CLOSED => t('Closed'),
      COMMENT_NODE_OPEN => t('Open'),
    );
  }
}
=======
<?php

/**
 * @file
 * Definition of views_handler_filter_node_comment.
 */

/**
 * Filter based on comment node status.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_node_comment extends views_handler_filter_in_operator {
  function get_value_options() {
    $this->value_options = array(
      COMMENT_NODE_HIDDEN => t('Hidden'),
      COMMENT_NODE_CLOSED => t('Closed'),
      COMMENT_NODE_OPEN => t('Open'),
    );
  }
}
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
