<<<<<<< HEAD
/**
 * @file
 * Responsive Green Slider Javascript.
 *
 */
(function ($) {
Drupal.behaviors.slider = {
attach: function (context, settings) {
  $(window).load(function() {
    $("#single-post-slider").flexslider({
      animation: 'slide',
      slideshow: true,
      controlNav: true,
      smoothHeight: true,
      start: function(slider) {
        slider.container.click(function(e) {
          if(!slider.animating) {
            slider.flexAnimate(slider.getTarget('next'));
          }
        });
      }
    });
  });
}
};
})(jQuery);
=======
/**
 * @file
 * Responsive Green Slider Javascript.
 *
 */
(function ($) {
Drupal.behaviors.slider = {
attach: function (context, settings) {
  $(window).load(function() {
    $("#single-post-slider").flexslider({
      animation: 'slide',
      slideshow: true,
      controlNav: true,
      smoothHeight: true,
      start: function(slider) {
        slider.container.click(function(e) {
          if(!slider.animating) {
            slider.flexAnimate(slider.getTarget('next'));
          }
        });
      }
    });
  });
}
};
})(jQuery);
>>>>>>> 6d2bfc44ff0188b46711530fc6441339db8d58cc
