<<<<<<< HEAD
<?php

/**
 * @file
 * Template for each "box" on the display query edit screen.
 */
?>
<div class="<?php print $classes; ?>" <?php print $attributes; ?>>
  <?php print $item_help_icon; ?>
  <?php if(!empty($actions)) : ?>
    <?php print $actions; ?>
  <?php endif; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $content; ?>
</div>
=======
<?php

/**
 * @file
 * Template for each "box" on the display query edit screen.
 */
?>
<div class="<?php print $classes; ?>" <?php print $attributes; ?>>
  <?php print $item_help_icon; ?>
  <?php if(!empty($actions)) : ?>
    <?php print $actions; ?>
  <?php endif; ?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $content; ?>
</div>
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
