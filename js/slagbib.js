(function ($) {
  $(document).ready(function() {
      //Sets attributes to commune logo
    $('.logo-img a').attr('href', 'http://www.slagelse.dk/');
    $('.logo-img a').attr('target', '_blank');
	
	$('.form-item-search-block-form > .ui-autocomplete-input').attr('placeholder', Drupal.t("Search materials, issues and more."));
  });
})(jQuery);
