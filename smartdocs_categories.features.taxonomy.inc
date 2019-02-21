<?php
/**
 * @file
 * smartdocs_categories.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function smartdocs_categories_taxonomy_default_vocabularies() {
  return array(
    'smartdocs_models_categories' => array(
      'name' => 'SmartDocs Models Categories',
      'machine_name' => 'smartdocs_models_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
