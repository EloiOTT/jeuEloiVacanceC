#include <stdio.h>

int main()
{

  int or = 100;
  int choix ;
  int ouvrirCarnet ;
  int pv = 20;
  int chapitre = 0;
  int affinite = 0;
  int Taillebraise = 0;
  int retard = 0;

  printf("vous êtes un chevalier de la cour d'Eldraine. Le roi Kenrith vous tiens en haute éstime, c'est pour quoi il vous a confier une quête des plus importante. Cela fait plusieurs semaines que du mouvement se fait sentir dans les Friches, les terres habitées par des créatures sauvages mais aussi et surtout par le peuple des elfes, en conflit avec les humains. Le peuple sauvage a dû se trouver un nouveau roi, avide de reprendre le contrôle du territoire occcupé par les humains. Afin d'avorter une bataille sanglante, vous avez pour objectif de supprimer ce nouveau roi auto-proclamé et de ramener sa tête à Kenrith.\n");
  printf("vous avez %d pv.\n");
  printf("vous possédez %d d'or.\n");
  printf("Vous parcourez les rues d'Eldraine d'un pas hâtif, vous avez rendez-vous avec votre compagnon de route dans 5 minutes. Et vous n'êtes pas prêt du tout! Il va vous faloir choisir entre dire au revoir à votre mère ou aller acheter une nouvelle armure.\n");
  printf("[1] dire au revoir à votre mère \n [2] acheter une nouvelle armure \n");
  scanf("%s", choix);

  if (choix == 1){
    printf("La famille passe avant. Vous vous rendez donc rapidement à la maison de votre mère pour lui dire que vous partez en mission pour une durée indéterminée. Comme toutes les mères de chevalier d'Eldraine, celle-ci vous fait part de sa fierté et vous encourage. Avant de repartir, elle vous donne une bourse. Vous l'acceptez avec un grand sourire, puis passez le pas de la porte avant de vous mettre à courir rejoindre votre coéquipier. \n");
    or = or + 50;
    printf("vous avez reçu 50 d'or. \n");
    printf("souhaitez vous ouvrir votre carnet de route? \n");
    printf("[1] ouvrir \n [2] continuer \n");
    scanf("%s", ouvrirCarnet);

      if (ouvrirCarnet == 1){
        printf("vous avez %d pv", pv);
        printf("vous possédez %d d'or", or);
        printf("note jour 1 : \n Le roi Kenrith ma informé qu'il avait reçu une missive de Garenbrig l'informant d'une altercation avec un elfe ayant essayé de s'y introduir pour une raison inconnue. \n");
        chapitre = chapitre + 1;
      }
      if (ouvrirCarnet == 2){
        chapitre = chapitre + 1;
      }
  }

  if (choix == 2){
    printf("Malheureusement, vous n'avez pas le temps de tout faire et la sécurité est plus importante. Après tout, c'est surtout pour pouvoir la revoir une fois la quête terminée que vous devez vous équiper au mieux. En arrivant à l'armurerie, vous y trouvez votre ancien commandant Wintermoor, heureux de vous revoir. Comprenant que vous manquez de temps, celui-ci se hâte de vous trouver une bonne armure et vous l'offre, en souvenir du bon vieux temps. Vous l'acceptez avec un grand sourire, puis passez le pas de la porte avant de vous mettre à courir rejoindre votre coéquipier. \n");
    pv = pv + 5;
    printf("vous avez obtenu 5 pv supplémentaire");
    printf("souhaitez vous ouvrir votre carnet de route? \n");
    printf("[1] ouvrir \n [2] continuer \n");
    scanf("%d", ouvrirCarnet);

      if (ouvrirCarnet == 1){
        printf("note jour 1 : \n Le roi Kenrith ma informé qu'il avait reçu une missive de Garenbrig l'informant d'une altercation avec un elfe ayant essayé de s'y introduir pour une raison inconnue. \n");
        chapitre = chapitre + 1;
      }
      if (ouvrirCarnet == 2){
        chapitre = chapitre + 1;
      }
  }

  if (chapitre == 1){
    printf("Vous apercevez votre compagnon de route vous attendant devant la grande porte d'entrée de la ville fortifiée. Il s'agit de Syr Carah, l'audacieuse, un chevalier de Braisereth, reconnue dans le monde entier. Après de brèves excuses pour votre retard, vous débatez de l'endroit vers lequel vous diriger afin d'obtenir un peu plus d'informations sur votre quête des plus importantes. \n");
    printf("[1] partir pour Ardenval \n [2] partir pour Garenbrig \n [3] partir pour Braisereth \n [4] partir pour Vantress \n");
    scanf("%d", choix);

    if (choix == 1){
      printf("Vous finissez finalement par vous décider de vous rendre à Ardenval, l'immense château blanc habritant les alliés les plus loyaux à la cour d'Eldraine. Même si Syr Carah aurait préféré se diriger vers Braisereth, elle accepte la nouvelle destination, ne voulant pas vous faire croire qu'elle voulait se rendre à son château natif par pure nostalgie. \n");
      chapitre = chapitre + 1;

    }
    if (choix == 2){
      printf("Vous finissez finalement par vous décider de vous rendre à Garenbrig comme vous l'avait conseillé Kenrith, Garenbrig étant l'imposant château implanté au beau milieu de la grande forêt en bordure des Friches. Même si Syr Carah aurait préféré se diriger vers Braisereth, elle accepte la nouvelle destination, ne voulant pas vous faire croire qu'elle voulait se rendre à son château natif par pure nostalgie. \n");
      chapitre = chapitre + 2;
    }
    if (choix == 3){
      printf("Vous finissez finalement par vous décider de vous rendre à Braisereth, le fier château perdu dans les montagnes ardentes où sont entraînés les plus valereux chevaliers d'Eldraine. Heureuse de pouvoir retourner à son château natif, Syr Carah vous fait part de son long entraînement qu'elle y a suivit tout le long du trajet. \n");
      affinite = affinite + 3;
      chapitre = chapitre + 3;
    }
    if (choix == 4){
      printf("Vous finissez finalement par vous décider de vous rendre à Vantress, le mystérieux château reposant en pleine mer, là où tous les savoirs du continent sont entassés dans une immense bibliothèque. C'est l'endroit idéal pour trouver des réponses à vos questions. Même si Syr Carah aurait préféré se diriger vers Braisereth, elle accepte la nouvelle destination, ne voulant pas vous faire croire qu'elle voulait se rendre à son château natif par pure nostalgie. \n");
      chapitre = chapitre + 4;
    }
  }

  if (chapitre == 2){
    printf("Après avoir traversé de nombreuses plaines et de multiples champs, vous arrivez finalement à Ardenval sans accros. Vous y êtes chalereusement accueillit par un régiment de chevalier qui vous escorte jusqu'à Linden, reine implacable. Son visage ferme et son attitude autoritaire contrastait fortement avec sa grande bienveillance. Ravi à l'idée de vous recevoir mais ne sachant pas la raison de votre visite, elle vous invite à vous expliquez. \n");
    printf("[1] demander comment se porte la famille royale (politesse) \n [2] demander s'ils ont eux des problèmes avec les habitants des Friches (direct) \n");
    scanf("%d", choix);

    if (choix == 1){
      printf("Vous faites preuves de politesse ce qui plaît à Linden. Néanmoins, vous n'apprenez rien d'utile et la reine s'éternise à raconter la vie à Ardenval, ne recevant que très peu de visite ses derniers temps. après plusieurs longue minutes d'échange sans intérêt pour votre quête, vous entendez les portes de la salle du trône s'ouvrir derrière vous. Un paladin entre, ferme les grandes portes rapidement, comme s'il souhaitait que personne ne puisse entrer... ou sortir. En se retournant, son visage fut frappé de surprise lorsqu'il vit que la reine n'était pas seul dans la pièce. Il ne dit mot et s'avança d'un pas assuré vers Linden. \n");
      printf("[3] laisser passer le paladin \n [4] vous interposer");
      scanf("%d", choix);

      if (choix == 3){
        printf("La femme vêtu de la fière armure de paladin d'Ardenval passa devant vous sans vous adresser le moindre regard et se dirigea vers la reine, avec une allure bien trop pressée. Elle se mit soudainement à courir et dégaina son épée hurlant férocement avant d'asséner un coup violent à Linden. Heureusement, celle-ci eut le temps de sortir sa longue épée d'un blanc épuré et pu se défendre à temps. Elle asséna un coup de pommeau sur le crâne du paladin qui s'effondra par terre. Malgré sa rapide réaction, la surprise se déssinait sur le visage de la reine qui vous demanda de bien vouloir quitter Ardenval tant qu'elle ne pourra être sur d'assurer la sureté de ses invités. \n");
        chapitre = chapitre + 4;
      }

      if (choix == 4){
        printf("Lorsque la femme vêtu de la fière armure de paladin d'Ardenval voulu passer devant vous, vous vous interposez devant elle, cassant son allure effrainée. Elle vous jette un regard noir, puis vous bouscule violemment et fonce tête baissée vers Linden, son épée armée par sa main droite. Mais grâce à votre intervention, la reine a eu amplement le temps d'anticiper l'attaque de la traîtresse et lui assène un puissant coup de pommeau sur le crâne, ce qui la fit tomber par terre, inconsciente. Malgré sa rapide réaction, la surprise se déssinait sur le visage de la reine qui vous demanda de bien vouloir quitter Ardenval tant qu'elle ne pourra être sur d'assurer la sureté de ses invités. \n");
        affinite = affinite + 1;
        pv = pv - 2;
        printf("vous avez perdu 2 pv.");
        chapitre = chapitre + 4;
      }
    }

    if (choix = 2){
      printf("Vous cherchez à savoir s'ils ont eut des problèmes avec les peuples des Friches, mais Linden vous affirme ne pas avoir connaissance de quelconque soucis ces derniers temps. Soudainement, un garde entre en trombe dans la salle, disant porter un message venant de Garenbrig. Le géant roi, Yorvo, se serait fait voler sa couronne par une créature inconnu. N'obtenant pas plus d'informations à Ardenval, vous décidez donc de faire route en direction de Garenbrig pour vous entretenir avec le noble géant. \n");
      chapitre = chapitre + 4;
    }
  }

  if (chapitre == 3){
    printf("Après avoir traversé la vaste forêt d'un pas prudent, vous arrivez finallement au Château de Garenbrig, aux murs recouvert de pousses sauvages. Les grandes portes de la forteresse s'ouvrir sous le cri des cornes de brume. Yorvo, roi de Garenbrig, vient vous accueillir en personne. Le géant à la barbe verte vous fait entrer dans une grande pièce jonchée de diverses plantes et d'arbres lui arrivant aux épaules. Il vous fait alors part de l'incident qu'il a eu il y a quelques jours de cela. Pendant qu'il était en train de chasser, certe proche des bordures des Friches, il tomba nez à nez avec ce qui lui paru être un étrange mélange entre un homme, un elfe et une fée, soit un mélange pure et simple de tous les peuples habitants les Friches. Surpis de sa découverte, Yorvo n'eut pas le temps de réagir lorsque celui-ci lui subtilisa sa couronne pour la poser sur sa tête et partir en courant, un grand sourire moqueur aux lèvres. fou de rage, le noble géant voulu poursuivre le voleur de couronne mais le perdit rapidement de vue. Le pacte instauré par le grand roi Kenrith l'interdisant de traverser la frontière qui les sépare des Friches, il attendait patiemment des chevaliers sous ses ordres, comme vous, afin qu'ils puissent se rendre dans ces terres sauvages pour mettre fin a un potentiel conflit meurtrié. \n");
    chapitre = chapitre + 4;
  }

  if (chapitre == 4){
    printf("Après avoir passé le trajet en écoutant attentivement Syr Carah narrer ses multiples péripéties, vous arrivez finalement à Braisereth. En pénétrant dans la forteresse, votre chemin croise celui de sept nains, tous étrangement similaires, qui vous accompagne jusqu'à Torbran, Thane de mont rouge, en personne. Vous tentez de lui demander certaines informations au sujet du mouvement dans les Friches, mais celui-ci ne daigne pas vous adresser la parole tant que vous n'avez pas passé le baptème du feu. \n");
    printf("[1] accepter de passer le baptème du feu \n [2] ne pas céder au caprice du nain");
    scanf("%d", choix);

    if (choix == 1){
      printf("Vous cédez donc à la demande du noble nain voulant tester votre bravoure. Il vous amène dans une arène lumineuse qui vous parait particulièrement dangereuse pour une salle d'entraînement. En effet, vous vous retrouvez sur une plateforme carré entourée par un bassin de lave et aux côtés délimités par de grands flambeaux d'au moins 4 mètre de haut. De chaque côtés de cette plateforme se trouve un nain armé d'une pioche, prêt à en découdre. Au puissant cri de Torbran, chacun d'eux se précipite vers vous en armant sa pioche. Suite à une bonne demi-heure de lutte, vous parvener à vaincre le groupe de nain sans les blesser trop grièvement, ce qui fut sûrement la partie la plus difficile du baptème du feu, vu que vous deviez le passer en utilisant votre propre arme. Torbran vous félicite et décide enfin de bien vouloir répondre à leurs questions. Il affirme avoir eut vent de quelques querelles entre ses chevaliers et des elfes qui auraient dépassé les frontières des Friches instaurés par le grand roi Kenrith. Aussi a t'il reçu un message provenant de Garenbrig, le géant roi, Yorvo, se serait fait subtiliser sa couronne lorsqu'il chassait en bordure des terres sauvages par un individu des Friches qui lui a parut être un étrange mélange entre un homme, un elfe et une fée. Vous décidez donc de vous rendre dans la forêt entourant Garenbrig afin d'enquêter sur cet inconnu qui pourrait bien être le nouveau roi des Friches. \n");
      affinite = affinite + 1;
      pv = pv - 3;
      printf("vous avez perdu 3 pv.");
      chapitre = chapitre + 2;
    }

    if (choix == 2){
      printf("Vous ne souhaitez pas vous abaissez au petit caprice de Torbran, qui avait juste pour envie de se moquer des chevaliers de la cour d'Eldraine. Et il n'en était pas question. Vous vous retrouvez à nouveau en train de débatre avec Syr Carah de votre nouvelle déstination. \n");
      affinite = affinite - 1;
      printf("[3] partir pour Ardenval \n [4] partir pour Garenbrig \n [5] partir pour Vantress \n");
      scanf("%d", choix);

      if (choix == 3){
        chapitre = chapitre - 2;
      }

      if (choix == 4){
        chapitre = chapitre - 1;
      }

      if (choix == 5){
        chapitre = chapitre + 1;
      }
    }
  }

  if (chapitre == 5){
    printf("Suite a un trajet des plus paisible, vous arrivez à un petit port bordant le Loch. Vous trouvez un marchant et lui demandez s'il peut vous amenez jusqu'à la forteresse flottante. Celui-ci accepte de vous y conduire pour 50 d'or. Vous navigez sur le Loch pendant près de 3 heures, puis vous vous acostez finalement à la forteresse au grandes voiles bleues. Syr Elenda vous y accueille, apparement déjà au courant de votre venu, et vous accompagne jusqu'à la titanesque salle des ouvrages. Syr Carah vous adresse un regard de détresse. Vous vous faites la réflexion qu'une femme venant de Braisereth n'aurait sûrement jamais eut l'occasion d'ouvrir un livre, la vie là-bas n'étant faite que d'entraînements les uns plus sévères que les autres. Vous vous mettez donc à chercher des ouvrages pouvant faire avancer votre quête. Au bout de 5 jours en ayant parcouru d'inombrable livres sur les Friches, les peuples sauvages et les créatures qui y vivent, vous finissez par obtenir une information qui vous est enfin utile. Le premier évènement fut l'apparition d'une fée extrêmement habile qui se serait introduit dans Vantress dans le but d'y dérober le Miroir Magique qui sert aux chevaliers en devenir de connaître leur déstination pour leur quête et dont l'accès est interdit depuis, ne se doutant pas de sa taille incommensurable. Puis, les nains de Braisereth aurait eut quelques différents avec des elfes s'étant avanturés en dehors des Friches. Enfin, le géant roi, Yorvo se serait fait subtiliser sa couronne par un être lui paraissant être un mélange entre un homme, un elfe et une fée. Ne pensant plus trouver d'autres informations utiles, vous décidez de reprendre la route en direction de la forêt entourant Garenbrig, là où le dernier incident a eut lieu. \n");
    or = or - 50;
    chapitre = chapitre + 2;
  }

  if (chapitre == 6){
    printf("Sur le sentier en direction de Garenbrig, vous vous retrouvez face à une intersection séparant votre chemin en deux. Le panneau vous indique que ces deux chemins amènent tous deux à Garenbrig, mais celui de droite vous fait passer par le marais brumeux et l'autre par le bois de la perdition. \n");
    printf("[1] passer par le marais \n [2] traverser le bois \n");
    scanf("%d", choix);

    if (choix == 1){
      printf("Vous décidez de prendre le chemin du marais. Plus vous avancez et plus l'air se fait humide, le sol plus mou. Au loin, vous observez une personne attendant au beau milieu du sentier. En arrivant à son niveau, celle-ci vous barre la route. En relevant la tête, vous croisez le regard vitreux d'une sorcière, une cane à la main, une pomme rouge sang dans l'autre. De la fumée noir séchappait de ses vêtements et des bras d'enfant paraissait sortir de sa cape noir. Sans bouger les lèvres, celle-ci vous ordonna de prendre la pomme est de croquer dedans. \n");
      printf("[3] manger la pomme \n [4] affronter la sorcière \n");
      scanf("%d", choix);

      if (choix == 3){
        printf("Vous décidez de rester poli et gardez votre sang-froid. Vous saisissez la pomme et croquez dedans. Vous paraissez surpris lorsque vous vous rendez compte que celle-ci a simplement le goût d'une pomme banale. La sorcière tend une main vers vous et vous demande maintenant de payer la pomme à un pris dérisoire. \n");
        printf("[5] payer 50 d'or \n [6] refuser de payer \n");
        scanf("%d", choix);

        if (choix == 5){
          printf("Vous lui donner la somme qu'elle demande afin d'éviter de la contrarier. Celle-ci vous accorde un sourire malicieux, puis s'enfonce dans le marais. Vous regardez sa silhouette disparaître dans la brume épaisse avant de reprendre votre route, déconcertez par la rencontre que vous venez de vivre. \n");
          or = or - 50;
          printf("Vous avez perdu 50 d'or. \n");
          pv = pv + 3;
          printf("Vous avez récupéré 3 pv. \n");
          chapitre = chapitre + 1;
        }

        if (choix == 6){
          printf("Vous n'accepter pas que l'on se moque de vous et ne comptez en aucun cas payer un pour-passer imposé par une vagabonde inconnue. Son visage perd son sourire pour prendre les traits de l'énervement. Soudain, vous ressentez comme une douleure dans votre ventre, qui se propage petit à petit dans votre corps. Votre regard se pose sur la pomme dans laquelle vous venez de croquez et vous ressentez la peur vous envahir. Un liquide violet s'échappait de celle-ci. En relevant la tête, vous voyez la sorcière s'enfoncer dans le marais en poussant des ricannements qui résonne dans votre crâne. La douleur se faisait trop forte pour que vous puissiez tenter de la ratrapper. Vous restez cloué au sol pendant de longues minutes, peut-être même pendant plusieurs heures, Syr Carah tentant tant bien que mal de vous calmer. Finalement, la douleur finit par disparaître et vous pûtes continuez votre route, néanmoins fatigué par cette mésaventure. \n");
          pv = pv - 6;
          printf("vous avez perdu 6 pv. \n");
          chapitre = chapitre + 1;
        }
      }

      if (choix == 4){
        printf("Vous n'avez pas de temps à perdre avec une sorcière. De plus, si la cour d'Eldraine a chassé les sorcières des villes, c'est pour une bonne raison. Vous dégainez votre épée et foncez sur la sorcière qui arborait maintenant un visage grave. Vous subissez quelques griffures mais parvenez à vaincre sans vous surmener. Après avoir nettoyé votre lame dans une flaque sombre, vous reprenez votre chemin. \n");
        pv = pv - 2;
        printf("vous avez perdu 2 pv. \n");
        chapitre = chapitre + 1;
      }
    }

    if (choix == 2){
      printf("Vous décidez de prendre le chemin qui traverse le bois, dont les arbres empêchent la lumière du soleil d'y pénettrer. En vous enfonçant de plus en plus profondemment dans le bois, vous commencez à entendre un grognement puissant en face de vous, sans parvenir à repérer la source de ce bruit angoissant. \n");
      printf("[3] contourner le potentiel danger en s'écartant du sentier \n [4] rester sur le sentier \n");
      scanf("%d", choix);

      if (choix == 3){
        printf("Vous vous enfoncez dans les bois et vous éloignez du grognement agressif petit à petit. Mais vous rencontrez un nouveau problème : vous ne savez plus comment rejoindre le sentier de terre. Vous avancez à tâtons à travers les nombreux arbres déviant votre chemin à maintes reprises. Finalement, vous parvenez à retrouver le sentier et vous pouvez continuer votre route. \n");
        affinite = affinite - 1;
        chapitre = chapitre + 1;
      }

      if (choix == 4){
        printf("Vous gardez votre sang-froid et continuez d'avancer. Mais malheureusement, vous finissez par tomber nez à nez avec la source de ces grognements. Vous faites maintenant face au grand méchant loup, le même qui vous faisait si peur dans les comptes que vous racontait votre mère avant de dormir. Le loup à la crinière de lion n'hésita à vous sauter dessus. Après une violente lutte contre le monstre du bois, vous parvenez à lui asséner un coup dont il ne parvient pas à se relever. Vous continuez votre route, amoché mais victorieux. \n");
        pv = pv - 8;
        printf("Vous avez perdu 8 pv. \n");
        chapitre = chapitre + 1;
      }
    }
  }

  if (chapitre == 7){
    printf("ouvrir le carnet?");
    printf("[1] ouvrir \n [2] continuer \n");
    scanf("%d", ouvrirCarnet);

    if (ouvrirCarnet == 1){
      printf("vous avez %d pv", pv);
      printf("vous possédez %d d'or", or);
      printf("note jour 4 : \n Yorvo a signalé qu'un troll garderait un pont non loin de son territoire de chasse. Les trolls ne se nourissent que d'annimaux sauvages et non d'humains mais je vais rester sur mes gardes. \n");
    }

    printf("Vous vous enfoncez maintenant dans la forêt de Garenbrig en direction des Friches. Plus vous avancez vers la frontière et plus vous ressentez une tension s'installer en vous. Syr Carah, elle, paraissait impatiente d'en découdre. Vous arrivez alors sur la rive d'un grand lac. Vous observez un pont de pierre qui semble le traverser, mais aussi une petite barque prête à naviguer. Et le lac est bien trop grand pour en faire le tour, vous ne parvenez même pas à en voir le bout. \n");
    printf("[1] emprunter le pont \n[2] utiliser la barque \n");
    scanf("%d", choix);

    if (choix == 1){
      printf("Vous vous engagez sur le pont, en marchant l'un derrière l'autre à cause de son étroitesse. Au bout d'un moment, vous croisère la route d'un immense troll vous barrant la route à l'aide de son bras droit. Celui-ci prononça quelques mots, d'abord pour se faire la réflexion que vous n'êtes pas des chèvres, puis pour vous demander si vous avez amené des chèvres avec vous.");
      printf("[3] forcer le passage \n[4] retourner à Garenbrig pour lui amener des chèvres \n");
      scanf("%d", choix);

      if (choix == 3){
        printf("Vous faites comprendre au troll qu'il n'aura pas ses chèvres et qu'il ferait mieux de vous laisser passer. Mais celui-ci s'énerve et décide de vous affronter. Tenant votre épée à deux mains, vous lui donnez plusieurs coup puissant mais la plupart ne font que lui entailler légèrement les bras. Vous subissez un coup de poing qui manqua de peu de vous faire tomber dans les pommes. Vous faites mine de rester cloué au sol et le troll du ponceau, peu fûté, approche sa tête de votre corps qu'il pense innerte. Vous saisissez ce moment pour lui asséner un coup fatal en plein crâne ce qui le fit bruyament tomber dans le lac. Vous continuez la traversée du pont, en titubant tout de même suite au sévère coup que vous a porté le troll. \n");
        pv = pv - 8;
        printf("vous avez perdu 8 pv. \n");
        chapitre = chapitre + 1;
      }
      if (choix == 4){
        printf("Vous vous faites la réflexion qu'il est préférable de perdre un peu de temps plutôt que de se battre avec un troll d'au moins 8 mètres. Vous retournez donc à Garenbrig où vous y trouvez un fermier et vous lui demandez si vous pouvez lui avheter ses chèvres. Afin de combler le troll du ponceau, vous lui prenez 3 chèvres et revenez au pont le plus rapidement possible. Le troll vous fait un grand sourire avant de commencer son festin. Vous en profitez pour vous éclipser et poursuivez la traversée du pont. \n");
        or = or - 75;
        printf("Vous avez perdu 75 d'or. \n");
        affinite = affinite - 1;
        chapitre = chapitre + 1;
      }
    }
    if (choix == 2){
      printf("Vous vous dites qu'une petite balade en barque ne pourrait pas vous faire de mal, histoire de décompresser de tout le chemin déjà parcouru. Vous observez comme une flaque rouge au beau milieu du lac. Vous pensyez d'abord à du sang mais vous vous rendez vite compte qu'il s'agit en fait des cheuveux d'une ondine, vous fixant du regard. Vous finissez enfin par comprendre de qui elle est : Emry, guetteuse du Loch. Mais que faisait-elle dans se lac bien trop éloigné du Loch? Vous n'avez pas le temps de réfléchir à cette question, et vous vous rappelez de son histoire dans les légendes. Si l'on souhaite passer devant Emry sans finir noyé, il faut laisser tomber un artefact de valeur dans l'eau. Malheureusement, mis à part votre or, vous ne possédez aucun objet de valeur sur vous. \n");
      printf("[5] affronter Emry \n [6] laisser tomber 100 d'or \n");
      scanf("%d", choix);

      if (choix == 5){
        printf("Vous ne souhaitez pas gaspiller toute votre or et sortez votre épée. Emry vous lance un regard noir, bien que ses yeux soient déjà noir de base, et se jette sur la barque pour vous faire chavirer. En la repoussant à coup de pied, celle-ci vous griffe la jambe, déchirant votre pantalon, un léger fillet de sang coulant jusqu'à vos pieds. Vous dites à Carah de rester sur ses gardes et d'attendre le moment où Emry reviendrait à la surface pour les faire chavirer. Au bout de quelques interminables secondes, Emry fit de nouveau surface. Avec une grande vitesse d'exécution, Carah enfonça son épée dans le torse de l'ondine furieuse qui poussa un dernier cri avant de s'éteindre. Avant de repousser le corps innerte de la guetteuse du Loch, vous observez que celle-ci tenait en ses mains la légendaire Taillebraise, l'artefact légendaire qui faisait la fierté de Braisereth avant d'être perdu lors de la quête pour tuer le Grand serpent de Lochemere. \n");
        affinite = affinite + 1;

        if (affinite == 4){
          printf("Carah prit l'épée incandescente dans ses mains, manquant de peu de se brûler. Elle eu plusieurs minutes de réflexion, puis, elle finit par vous tendre la lame en vous disant que vous méritez de l'utiliser pour mener à bien votre mission et qu'elle déciderait plus tard si elle la ramènerait auprès de Torbran une fois celle-ci terminée. Vous acceptez le présent, touché de la confiance que vous porte Carah. \n");
          Taillebraise = Taillebraise + 1;
        }

        if (affinite < 4){
          printf("Carah prit l'épée incandescente dans ses mains, manquant de peu de se brûler. Puis, elle attacha l'épée à sa taille en disant que Torbran sera ravi quand il la verra revenir avec l'artefact le plus précieux à ses yeux. Vous poursuivez votre traversée sur le lac silencieux. \n");
        }
        chapitre = chapitre + 1;
      }

      if (choix == 6){
        printf("Vous vous dites qu'il vaut mieux perdre un peu d'or plutôt que la vie. Vous laissez donc tomber une bourse épaisse dans le lac. Emry disparue ausstôt pour aller récupérer son butin et vous pûtes ainsi continuer votre traversée paisiblement. \n");
        or = or - 100;
        printf("Vous avez perdu 100 d'or. \n");
        chapitre = chapitre + 1;
      }
    }
  }
  if (chapitre == 8){
    printf("Vous pénétrez enfin les Friches. Vous vous attendiez à rencontrer plus de difficultés pour y entrer, mais même arrivé, vous ne rencontrez aucun peuple sauvage ni de créature. Et d'habitude, il y a toujours des sentinels postées à l'entrée des terres sauvages. Vous vous y enfoncez donc, tout de même avec prudence. vous finissez par sortir de la forêt servant de frontière pour arriver dans une vaste plaine traversée par un ruisseau. Mais vous avez finalement de la compagnie. Un renard géant monté par un elfe brandissant une lame dans chaque main. C'est un préservateur né des Friches, visiblement en retard puisque vous y avez pénétré il y a plus de 2 heures. Mais celui-ci paraît quand même prêt à en découdre. \n");
    printf("[1] affronter l'elfe \n [2] laisser faire Carah \n");
    scanf("%d", choix);

    if (choix == 1){

      if (Taillebraise == 1){
        printf("Vous dégainez Taillebraise et attendez que l'elfe arrive à votre niveau. Le renard bondit sur vous et l'elfe pointa ses deux épées dans votre direction. pensant simplement frapper le renard géant pour dévier sa trajectoire, votre coup d'épée fût plus puissant que ce à quoi vous vous attendiez. le renard fût violemment repoussé en arrière et ne pût se relever. Aussi l'elfe, même si vous ne l'aviez pas visé, reçu de plein fouet votre attaque et se retrouva aussi à terre, innerte, sa tenue prenant feu. Abasourdi par la force que vous procure votre nouvelle épée, vous finissez par réagir et allez éteindre l'elfe incandescent, afin d'éviter que celui-ci ne se propage. \n");
      }
      if (Taillebraise == 0){
        printf("Vous dégainez votre épée et attendez que l'elfe arrive à votre niveau. Le renard bondit sur vous et l'elfe pointa ses deux épées dans votre direction. Votre lame traversa le crâne du renard géant et alla se loger dans la poitrine de l'elfe qui poussa un dernier cri de guerre en enfonçant ses deux épées dans chacune de vos épaules. Après avoir émit un grognement de douleur, vous faites tomber vos deux adversaires sur le côté afin de dégager votre épée, puis vous vous relevez avec une grimace à cause de vos blessures. \n");
        pv = pv - 4;
        printf("Vous avez perdu 4 pv. \n");

        if (pv < 1){
          printf("Vous vous écroulez au sol. Vous n'avez plus la force de tenir debout, ni même de garder les yeux ouverts. Vous vous enfoncez dans un profond sommeil dont vous n'allez pas vous réveiller. \n");
          return 0;
        }
      }
    }
    if (choix == 2){
      printf("Syr Carah sortie sa lance et foncea tête baissée vers le renard rugissant. Elle bondit et planta sa lance dans la poitrine de l'elfe qui lui ne parvenait pas à la toucher avec ses deux lame biens moins longues. Il tomba à terre hurlant de rage et de douleur. Carah fît face au renard qui continuait à lui grogner dessus. Carah frotta sa lance contre un rocher à ses pied ce qui fit surgir comme par magie une gerbe de flammes en direction de la bête enragée. Celle-ci prit peur et déguerpit, laissant l'elfe au beau milieu de la plaine, à moitié mort. \n");
    }
    printf("soudain, vous entendez quelqu'un vous applaudir dans votre dos. en vous retournant, vous tombez nez à nez avec le voleur de couronne perché dans un arbre, arborant fièrement son trésor subtilisé. Il se présanta à vous comme Oko, puis vous expliqua qu'il n'a rien contre les humains ou quelconque autre être vivant sur ce plan, un terme qui devait désigner le monde mais que vous n'aviez jamais entendu auparavant. Mais il cherche simplement à faire passer le temps, et les conflits sont ce qui l'amuse le plus. Il vous fit comprendre que vous n'avez pas la force suffisante pour le vaincre mais il convient à vous aider dans votre quête. Si vous acceptez de lui donner 50 d'or, il vous laissera utiliser un portail qu'il a lui même ouvert afin de faire passer toutes les troupes des Friches vers la cour d'Eldraine. Ainsi, vous explique-t'il, il pourra assister à la plus grande bataille que ce monde n'ai jamais connue. Puis celui-ci vous fait un nouvel aveux : il a aussi ouvert un autre portail pour faire passer un groupe de fée qui irait réveiller le grand Serpent de Lochemere, mettant en péril la vie de tout les habitant de Vantress ainsi que la perdition d'un grand savoir. \n");

    if (or < 50){
      printf("vous ouvrer votre bourse et vous vous rendez compte que vous n'avez plus assez d'or pour payer Oko. Avant que vous n'ayez le temps de lui dire, celui-ci vous adressa un grand sourire et prononça une courte phrase avant de disparaître : 'dommage pour vous!'. \n");
      retard = retard + 1;
    }

    if (or > 49){
      printf("Vous lui balancez votre bourse en lui ordonnant de vous indiquer où se trouvent les portails. Celui-ci vous souris et pointe du doight le bois à sa droite. Lorsque votre regard voulu se porter de nouveau sur votre interlocuteur, celui-ci avait déjà disparue. Vous courrûtes jusqu'au bois indiqué par Oko et y découvrîtes les deux portails dont il parlait. \n");
    }
    printf("[3] rejoindre la bataille de la cour d'Eldraine \n [4] affronter le Serpent de Lochmere \n");
    scanf("%d", choix);

    if (choix == 3){
      chapitre = chapitre + 1;
    }
    if (choix == 4){
      chapitre = chapitre + 2;
    }
  }

  if (chapitre == 9){

    if (retard == 1){
      printf("Lorsque vous arrivez à la cour d'Eldraine, vous observez déjà plusieurs bâtiments en feu, et le sol est jonché par les corps sans vie de chevaliers et d'elfes. Aussi, en avançant vers le centre de la ville fortifiée, vous passez devant le Locthwain, le château volant, éffondré en pleine ville. Votre chemin croise alors celui d'un géant casseur de rempart, faisant déjà mine de vous écraser. \n");

      if (affinite > 2){
        printf("Carah s'empressa de sortir sa lance et couru vers le géant en vous disant de continuer sans elle. Vous auriez aimé l'aider, mais le temps presse et vous entendez des hurlements provenant de la ville haute.");
      }
      if (affinite < 3){

        if (Taillebraise == 1){
          printf("Vous dégainez Taillebraise et attendez que le géant fasse un pas vers vous avant de lui sauter dessus. Vous lui enfoncez Taillebraise dans la cuisse. Le géant, criant sous le choc de la lame ardente, tituba et finit par tomber, les fesses par terre. Avec une grande vitesse est une agilité remarquable, Carah monta sur le ventre du géant et grimpa jusqu'à sa tête pour y enfoncer sa lance. Le géant vous est 'légèrement' tombé dessus dans sa chutte, mais les dégâts furent vraiment superficiels. Le casseur de muraille vaincu, vous foncez vers la ville haute, d'où des hurlement retentissaient. \n");
          pv = pv - 1;
          printf("Vous avez perdu 1 pv. \n");

          if (pv < 1){
            printf("Malgré cela, vous vous écroulez tout de même au sol. Vous n'avez plus la force de tenir debout, ni même de garder les yeux ouverts. Vous vous enfoncez dans un profond sommeil dont vous n'allez pas vous réveiller. \n");
            return 0;
          }
        }

        if (Taillebraise == 0){
          printf("Vous dégainez votre et attendez que le géant fasse un pas vers vous avant de lui sauter dessus. Vous lui enfoncez votre épée dans la cuisse. Le géant, laissant échapper un légé grognement, vous projeta contre une maison à moitié démolie. Carah lui fit subir un important coup de lance derrière le genoux, ce qui fit tomber le géant qui parvint à arrêter sa chutte avec ses mains. Mais c'était sans compter sur la vitesse épatante de Carah. Avec une agilité remarquable, celle-ci monta sur le ventre du géant et grimpa jusqu'à sa tête pour y enfoncer sa lance. Le casseur de muraille vaincu, vous foncez vers la ville haute, d'où des hurlement retentissaient. \n");
          pv = pv - 5;
          printf("Vous avez perdu 5 pv. \n");

          if (pv < 1){
            printf("Vous vous écroulez au sol. Vous n'avez plus la force de tenir debout, ni même de garder les yeux ouverts. Vous vous enfoncez dans un profond sommeil dont vous n'allez pas vous réveiller. \n");
            return 0;
          }
        }
      }
    }
    if (retard == 0){
      printf("En traversant le portail, vous arrivez dans la ville basse d'Eldraine. Mais votre chemin est rapidement barré par un géant casseur de muraille. Celui-ci s'apprêta à charger vers vous mais sa course fût freinée par des chevaliers en armure noir tombés du ciel. En levant les yeux, vous appercevez le Locthwain, le château volant dirigé par Ayara. Ne sachant pas comment remercier un château flottant dans les aires, vous poursuivez votre route vers la ville haute, d'où s'echappent des hurlements inquiétants. \n");
    }
    printf("Arrivé dans la ville haute, vous repérez avec effroi la raison de ces hurlements. Mélangés à ces cris de désespoir, son rire rauque se fesait entendre. Par le plus grand des malheurs, vous vous retrouvez face à l'ancien roi fou de Garenbrig, surnommé le troll festoyant, ayant été condamné à l'exil par le roi Kenrith après avoir commis le massacre de ses propres conseillés pour une raison encore inconnu aujourd'hui. Le géant roi déchu était déjà en train d'affronter Kenrith, Ayara, la reine du Locthwain, et Syr Konrad, le sinistre. Mais ceux-ci paraissaient en grande difficulté, c'est pourquoi vous décidez de plonger dans le combat malgré la peur insoutenable. Traversant les murs du château comme s'ils n'existaient même pas, le roi troll propulsa un de ses longs bras tenant un sceau en métal rempli d'or et tenta de balayer ses quatres adversaires. Seul Ayara fût percutée de plein fouet par l'attaque. Elle ne se releva pas. Syr Konrad, le visage toujours aussi impassible mais ayant une larme coulant sur sa joue gauche, parti en trombe vers les jambes de l'imposant ennemi. Il se mit à lui taillader les jambes et parvint à lui faire poser les genoux au sol. Malgré ses blessures, le troll colossal continuait à rire. Il balanca un de ses bras qui heurta violemment Syr Konrad, l'envoyant valser par delà les murs en ruines du château. Mais son élan l'obligea à poser aussi ses mains au sol. Il ne vous en fallut pas plus pour réagir. Serrant fermement votre épée dans vos mains, vous courrez vers les bras du troll ricanant. Vous lui infligez de profondes entailles dans les avants bras ce qui lui fit de nouveau perdre l'équilibre, juste après vous avoir propulsé en arrière par un violent coup de sceau en métal. Ses bras ne pouvant plus supporter le poids de son corps, il s'écroula, laissant sa tête à la portée de Kenrith. Celui-ci ne perdit pas de temps, courru, sauta, et enfonça sa longue lame dans l'unique oeil du troll. Ses rires cessèrent. Le géant troll voulu se relever. Puis s'effondra finalement pour de bon. \n");
    pv = pv - 7;

    if (pv < 1){
      printf("Vous vous écroulez au sol. Vous n'avez plus la force de tenir debout, ni même de garder les yeux ouverts. Vous vous enfoncez dans un profond sommeil dont vous n'allez pas vous réveiller. Vous êtes mort en sauvant Eldraine, au côté de votre roi, alors comment espérer une mort plus honorable? \n");
      return 0;
    }
    printf("Quelques jours plus tard, vous parté de chez vous le matin pour vous rendre au château, comme à votre habitude. la grande ville était en reconstruction, et les murs de la partie gauche du château étaient remplacés par des potos en bois en attendant. Tous les chevaliers aptes à travailler avaient été mobilisés pour rebâtir la ville fortifiée. Mais Kenrith vous avait demandé de ne pas y participer, et de venir le voir, ce matin même. Le plafon de la salle du trône avait lui aussi subit des dégâts. Ce matin là, la lumière du soleil venait éclairer le trône où était fièrement assit le grand roi Kenrith, une image qui vous parru illustrer le fait que même les dieux ne pouvaient imaginer un roi plus légitime que lui. Il se leva et esquissa son premier sourire depuis l'assaut. Alors, il prononça haut et fort à quel point il était fier d'avoir des chevaliers aussi vaillant que vous à sa solde. C'est la raison pour laquelle, aujourd'hui, vous venez d'obtenir le titre de Syr de la cour d'Eldraine.");
  }

  if (chapitre == 10){

    if (retard == 1){
      printf("Suite à 2 jours à courir sans s'arrêter jusqu'au Loch, vous atteignez finalement votre destination. Mais trop tard, malheureusement. Le château Vantress avait déjà été détruit et cela ne pouvait signifier qu'une chose : le Serpent du Lochmere s'était réveillé de nouveau. Sans prendre le temps de vous référer à un marin du petit village portuaire, vous sautez sur une embarcation et prenez la mer plate, sans réellement savoir où vous rendre pour trouver le monstre marin.");
    }

    if (retard == 0){
      printf("Une fois le portail traversé, vous arrivez dans la salle du Miroir Magique. Cette pièce de Vantress ayant été condamnée, les gardes du château furent fortement surpris d'en voir sortir deux chevaliers qui n'auraient pas pu y entrer sans être repéré. Sans prendre le temps de leur expliquer, vous foncez vers le port du château où vous y trouvez un navigateur. Vous lui demandez de vous emener jusqu'à la prison sous-marine du Serpent de Lochmere, en lui promettant qu'il sera grassement récompensé lorsque tout ça sera terminé. Celui-ci ne posa aucune question et vous fit embarquer à bord de son modeste navire.");
    }

    printf("En vous enfonçant dans le Loch, vous finissez par ressentir votre embarcation tanguer de plus en plus. En vous penchant par dessus bord, vous observez des vagues venant se heurter à la coque, des vagues de plus en plus grosses. Un cri strident retenti. Et le Grand Serpent de Lochmere apparue. Il était loin mais se rapprocha avec une vitesse ahurissante. Rapidement, il commença à tourner autour du bâteau, sa taille colossale lui permettant de modifier les courants marins à sa guise. Le navire commença à tourner sur lui même, tandis que le niveau de l'eau commençait à monter tout autour de lui. En réalité, le bâteau ne faisait que de s'enfoncer dans le siphon que le titanesque serpent venait de créer. Bientôt, la coque se brisera sous la pression et vous allez finir englouti, puis dévoré par le serpent. Perdu pour perdu, vous décidez de plonger pour affronter le géant monstre dans son élément. Mais l'eau en mouvement était troublée, votre vision extrêmement limitée ne vous permis pas de voir la gueule grande ouverte du serpent qui fonçait sur vous. Au dernier moment, Carah s'interposa en vous envoyant un peu plus loin, sa force altérée par ses mouvements ralenti sous l'eau. Elle parvint à placer sa lance en travers de la gueule du serpent pour qu'il ne puisse la refermer, mais la vitesse du monstre l'obligea à rester cramponné à son arme. Le serpent vous frôlant sans vous percuter, vous eûtes une réaction qui vous surpris vous même. Votre lame se planta dans le corps recouvert d'épaisses écailles du serpent. Vous tenez bon en serrant fermement son pommeau. du sang noir s'échappait de son corps, laissant derrière lui une sombre trainée. Un bruit de métal quiéclate parvint à votre oreille, fortement atténué sous l'eau. La gueule du serpent venait de se refermer. Une trainée rouge se mélangeait maintenant au sang obscure du monstre.");

    if (affinite > 5){
      printf("Vous sentez quelque chose vous brûler la poitrine. Vous essayer de hurler mais votre cri fût étouffé dans l'eau. La brulure dans la poitrine s'intensifia et vous eûtes l'impression de vous replier sur vous même avant d'apparaître dans une immense ville, sans comprendre le pourquoi du comment. Cette ville était encore pllus grande qu'Eldraine. Peut-être dix fois plus. En fait, celle-ci paraissait ne pas avoir de fin. Et autour de vous se dressaient des tours faisant au moins trois fois la hauteur du château de Kenrith. En regardant devant vous, vous voyez un homme au visage caché par une large capuche, habillé entièrement de bleu. Celui-ci marchait dans votre direction, comme s'il voulait absolument vous dire quelque chose de crucial. Mais vous retrouvez vos pensées et vous vous souvenez que vous avez un serpent des mers géant à tuer, une amie à venger. Vous ressentez de nouveau une brûlure intense dans votre poitrine. l'homme en face de vous tendit une main vers vous et parut dire 'attends!'. Trop tard. Vous êtes déjà revenu dans le Loch, votre épée un peu plus enfoncée dans la chère du monstre.");
    }

    printf("Votre détermination vous revient et vous commencez votre ascencion sur le dos du serpent, plantant votre lame dans sa peau pour avancer. Vous finissez par arriver au niveau de sa tête. Votre épée traversa son crâne avec force et la course effrénée du monstre s'arrêta subitement. \n");
    pv = pv - 7;

    if (pv < 1){
      printf("Vous lachez votre épée. Vous n'avez plus la force de bouger, ni même de garder les yeux ouverts. Vous vous enfoncez dans un profond sommeil dont vous n'allez pas vous réveiller. Vous êtes mort en tuant la plus grande menace de votre monde, alors comment espérer une mort plus honorable? \n");
      return 0;
    }

    printf("Vous revenez difficilement à la surface, épuisé. Pouvant de nouveau repirer, votre premier reflexe fût d'attraper une planche du navire complètement détruit par le serpent du Lochmere. Vos pauîères deviennent de plus en plus lourdes, vous vous endormé, exténué par toute cette aventure, en espérant dériver jusqu'au village portuaire de la côte et que l'on vous retrouve rapidement.");
  }



  return 0;
}
