(function ($) {
  $(document).ready(function() {
    //Moves commune logo to footer
    $('.region-footer-second .block-library-address .content > .address').append('<div class="logo-img"><a href="http://www.slagelse.dk/" rel="home" title="Slagelse Kommune" class="active" target="_blank"><span class="logo-image"></span></a></div>');
    $('.form-item-search-block-form > .ui-autocomplete-input').attr('placeholder', Drupal.t("Search materials, issues and more."));
  });
})(jQuery);
