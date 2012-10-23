(function ($) {
  $(document).ready(function() {
    //Moves commune logo to footer
    $('.region-footer-second .block-library-address .content > .address').append('<div class="logo-img"><a href="http://www.slagelse.dk/" rel="home" title="Slagelse bibliotekerne" class="active" target="_blank"><img src="/profiles/artesis/themes/slagbib_theme/logo.png" alt="Slagelse bibliotekerne" id="logo"></a></div>');
    $('.form-item-search-block-form > .ui-autocomplete-input').attr('placeholder', Drupal.t("Search materials, issues and more."));
  });
})(jQuery);
